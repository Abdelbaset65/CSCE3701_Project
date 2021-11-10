CREATE DATABASE AUC_Precautions;
USE AUC_Precautions;

CREATE TABLE AUC_Member (
ID char(9) NOT NULL PRIMARY KEY,
Name varchar(50),
Type varchar(50));

CREATE TABLE Violation(
VID INT primary key auto_increment,
location varchar(50),
date datetime,
ID_Make char(9),
foreign key(ID_Make) REFERENCES AUC_MEMBER(ID)
);

CREATE TABLE Petition_Violation(
ID_Petition char(9),
VID INT,
Reason varchar(150),
foreign key(ID_Petition) REFERENCES AUC_MEMBER(ID),
foreign key(VID) REFERENCES Violation(VID),
primary key(ID_Petition,VID));

CREATE TABLE Verify_Petition(
ID_Verify char(9),
VID INT,
Status char,
foreign key(ID_Verify) REFERENCES AUC_MEMBER(ID),
foreign key(VID) REFERENCES Violation(VID),
primary key(ID_Verify,VID));

-- YYYY-MM-DD hh:mm:ss
CREATE TABLE AccessRequest(
ID char(9) NOT NULL,
date datetime NOT NULL,
Temperature float,
Grant_Access bool,
primary key(ID, date),
foreign key(ID) REFERENCES AUC_Member(ID)
);

INSERT INTO auc_member values
('900190001', 'Omar1', 'Undergraduate Student'),
('900190002' ,'Omar2' ,'Undergraduate Student'),
('900190003' ,'Omar3' ,'Undergraduate Student'),
('900190004' ,'Kareem' ,'Undergraduate Student'),
('900190005' ,'Sherif', 'Undergraduate Student'),
('900290001' ,'Khaled' ,'Administrator');

INSERT INTO Violation values
(1, 'Bassily', '2021-11-5 14:30:30', '900190001'),
(2, 'Bassily', '2021-11-5 15:30:40', '900190001'),
(3, 'Bassily', '2021-11-5 16:30:55', '900190002'),
(4, 'Bassily', '2021-11-5 17:30:50', '900190003'),
(5, 'Bassily', '2021-11-5 14:10:05', '900190001'),
(NULL, 'Bassily', '2021-11-5 14:30:30', '900190001');

INSERT INTO Petition_Violation VALUES 
('900190001', 1, 'I was just changing my mask'),
('900190002', 3, 'I was eating'),
('900190001', 5, 'I am not sure about that violation');

INSERT INTO Verify_Petition VALUES 
('900290001', 1, 'A'),
('900290001', 3, 'A'),
('900290001', 5, 'D');

INSERT INTO AccessRequest VALUES
('900190001', '2021-11-6 08:15:24', '34.2', 1),
('900190002', '2021-11-6 08:15:24', '38.4', 0);

SELECT* FROM AUC_Member;
SELECT* FROM Violation;
SELECT* FROM Petition_Violation;
SELECT* FROM Verify_Petition;
SELECT* FROM AccessRequest;