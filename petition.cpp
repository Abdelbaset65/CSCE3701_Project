#include <iostream>
#include <fstream>
using namespace std;
class petition {
private:
	string petitioner_UID;
	string Member_status;
	string fine_ID;
	string officer_ID;
	bool petition_accepted;
	string details;
	string reason;
public:
	void send_petition(string petitioner_UID, string MemberStatus, string fineID, string details) {
		this->petitioner_UID = petitioner_UID; this->Member_status = MemberStatus; this->fine_ID = fineID; this->details = details;
		ofstream myfile;
		myfile.open("petitions.csv", fstream::app);
		myfile << petitioner_UID<<"," <<MemberStatus << "," << fineID << ","  <<details<< "\n";
		myfile.close();
	}
	void validate_petition(string fineID, string officerID, bool petitionAccepted, string reason) {
		this->officer_ID = officerID;  this->petition_accepted = petitionAccepted;	this->reason = reason;
		ofstream myfile;
		myfile.open("validation.csv", fstream::app);
		myfile << officerID << "," << fineID << "," << petition_accepted << "," << reason<<"\n";
		myfile.close();
		}
};
int main() {
	petition p1,p2,p3,p4;
	p1.send_petition("900190001", "Undergraduate Student", "11:45:39_Bassily", "I have only switched my mask for a few seconds.");
	p1.validate_petition("11:45:39_Bassily", "1100", 1, "the student was found to be changing his mask");

	p2.send_petition("900190002", "Undergraduate Student", "14:30:23_SSE", "I am  not sure if I was taking off my mask or not.");
	p2.validate_petition("14:30:23_SSE", "1100", 0, "the student was found not wearing a mask at all");

	p3.send_petition("901190003", "Graduate Student", "18:05:39_PVA", "I was eating.");
	p3.validate_petition("18:05:39_PVA", "1100", 1, "the student was found to be eating");

	p4.send_petition("100190004", "Faculty", "21:30:23_CORE", "I believe I was wearing the mask all day.");
	p4.validate_petition("21:30:23_CORE", "1100", 1, "the student was found to be changing his mask");

	return 0;
}