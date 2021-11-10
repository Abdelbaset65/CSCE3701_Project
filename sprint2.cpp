#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int m = 17;
	int n = 6;
	int choice, choice2,choice3;
	string contact;
	ifstream timetable_1;
	ofstream timetable_2;
	timetable_1.open("timetable.txt");
	timetable_2.open("timetable.txt");
	vector<vector<int>> timeslots(n, vector<int>(m));
	vector<string> slots(m);
	for (int j = 0; j < m; j++)
	{

		timetable_1 >> slots[j];


	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{

			timetable_1 >> timeslots[i][j];


		}
	}
	cout << "\t" << "///////// AUC Antigen Test /////////" << "\t";

	cout << endl << "Choose reason behind the test: ";

	cout << endl << "1. Feverish Symptoms ";

	cout << endl << "2. You have been in contact with a Covid-19 case (AUC member)";

	cout << endl << "3. You have been in contact with a Covid-19 case (non-AUC member)";

	cin >> choice;
	switch (choice) {
	case 1: {
		cout << endl << "Pick a day of the week";
		cout << endl << "1. Saturday ";
		cout << endl << "2. Sunday ";
		cout << endl << "3. Monday";
		cout << endl << "4. Tuesday ";
		cout << endl << "5. Wednesday ";
		cout << endl << "6. Thursday " << endl;
		cin >> choice2;
		switch (choice2)
		{
		case (1):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[1][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[1][choice3] = (timeslots[1][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}
		case (2):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[2][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[2][choice3] = (timeslots[2][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (3):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[3][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[3][choice3] = (timeslots[3][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (4):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[4][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[4][choice3] = (timeslots[4][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (5):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[5][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[5][choice3] = (timeslots[5][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (6):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[6][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[6][choice3] = (timeslots[6][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}
		break;
		}
	case(2):
	{
		cout << endl << "Name of the person you were in contact with: ";
		cin >> contact;

		cout << endl << "Pick a day of the week";
		cout << endl << "1. Saturday ";
		cout << endl << "2. Sunday ";
		cout << endl << "3. Monday";
		cout << endl << "4. Tuesday ";
		cout << endl << "5. Wednesday ";
		cout << endl << "6. Thursday " << endl;
		cin >> choice2;
		switch (choice2)
		{
		case (1):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[1][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[1][choice3] = (timeslots[1][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}
		case (2):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[2][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[2][choice3] = (timeslots[2][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (3):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[3][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[3][choice3] = (timeslots[3][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (4):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[4][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[4][choice3] = (timeslots[4][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (5):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[5][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[5][choice3] = (timeslots[5][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (6):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[6][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[6][choice3] = (timeslots[6][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}
		break;
		}
	case(3):
	{

		cout << endl << "Pick a day of the week";
		cout << endl << "1. Saturday ";
		cout << endl << "2. Sunday ";
		cout << endl << "3. Monday";
		cout << endl << "4. Tuesday ";
		cout << endl << "5. Wednesday ";
		cout << endl << "6. Thursday " << endl;
		cin >> choice2;
		switch (choice2)
		{
		case (1):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[1][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[1][choice3] = (timeslots[1][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}
		case (2):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[2][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[2][choice3] = (timeslots[2][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (3):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[3][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[3][choice3] = (timeslots[3][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (4):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[4][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[4][choice3] = (timeslots[4][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (5):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[5][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[5][choice3] = (timeslots[5][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}

		case (6):
		{
			for (int i = 1; i < m; i++)
			{
				if ((timeslots[6][i]) < 10)
					cout << slots[i] << "    ";
			}
			cout << endl << "Pick column number of the time slot desired: ";
			cin >> choice3;
			timeslots[6][choice3] = (timeslots[6][choice3]) + 1;
			cout << endl << "Slot booked";
			return 0;
			break;
		}
		break;
		}
	}
	}
	}
	}
	return 0;
}