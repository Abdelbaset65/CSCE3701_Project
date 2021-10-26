#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{

	
	int n = 5; // number of students that entered the university in that day
	int m = 4; // columns 

	vector<vector<string>> database(n+1, vector<string>(m));
	vector<vector<string>> banner_db(n+1, vector<string>(m));
	ifstream students;
	ofstream banner;
	banner.open("rewards_fines.txt");
	students.open("students.txt");
	
	if (students.fail())
	{
		cout << "*** ERROR: Cannot open " << "students.txt" << endl;
			// failure return
	}  // end if
	if (banner.fail())
	{
		cout << "*** ERROR: Cannot open " << "rewards/fines.txt" << endl;
		// failure return
	}	// end if
	
	//students.ignore(61);
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < m; j++)
		{

			students >> database[i][j];
			
			
		}
	}
	
	
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<< database[i][j]<<" ";

		}
		cout << endl;
	}

	banner_db = database;
	banner_db[0][2] = "Fines";
	banner_db[0][3] = "Rewards";
	for (int i = 1; i < n+1; i++)
	{
		if (database[i][2] == "1")
		{
			banner_db[i][2] = "warning";
		}
		if (database[i][2] == "2")
		{
			banner_db[i][2] = "50 egp";
		}
		if (database[i][2] == "3")
		{
			banner_db[i][2] = "100 egp";
		}
		if (database[i][2] == "4")
		{
			banner_db[i][2] = "200 egp";
		}
	}
	for (int i = 1; i < n+1; i++)
	{
		if (database[i][3] == "10")
		{
			banner_db[i][3] = "50egp voucher";
		}
		if (database[i][3] == "20")
		{
			banner_db[i][3] = "100egp voucher";
		}
		
	}
	
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < m; j++)
		{

			banner<<  banner_db[i][j]<<" ";



		}
		banner << "\n";
	}
	return 0;
}