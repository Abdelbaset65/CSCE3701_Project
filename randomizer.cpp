#include <iostream>
#include <iomanip>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include <fstream>
#include <string>
#include <string.h>
//#include "libxl.h"
using namespace std;

struct Student
{
    string name;
    int id;
    int days_detected = 0;
    int days_detected_consecutive = 0;
    int days_undetected = 0;
    int days_undetected_consecutive = 0;
    int max_streak_detected = 0;
    int max_streak_undetected = 0;
    int punish_points = 0;
    int reward_points = 0;
};

vector <Student> Students;

void populate ()
{
    Student Omar; Omar.name = "Omar"; Omar.id = 900171970;
    Students.push_back(Omar);
    Student Karim; Karim.name = "Karim"; Karim.id = 900197017;
    Students.push_back(Karim);
    Student Sherif; Sherif.name = "Sherif"; Sherif.id = 900701719;
    Students.push_back(Sherif);
    // for (auto &s : Students)
    // {
    //     cout << s.name << setw(10) << s.id << endl;
    // }
}

void randomize(void)
{
    bool detected = 0;
    for (auto &s : Students)
    {
        detected = rand() % 2;
        if (detected)
        {
            s.days_detected ++ ;
            s.days_detected_consecutive ++;
            if (s.max_streak_detected < s.days_detected_consecutive) s.max_streak_detected = s.days_detected_consecutive;
            s.days_undetected_consecutive = 0;
        }
        else
        {
            s.days_undetected ++;
            s.days_undetected_consecutive ++;
            if (s.max_streak_undetected < s.days_undetected_consecutive) s.max_streak_undetected = s.days_undetected_consecutive;
            s.days_detected_consecutive = 0;
        }
    }
}

int main (int argc, char** argv)
{
    ofstream of;
    of.open ("students.txt", fstream::app); 
    if (of.fail()) {cout << "*** ERROR: Cannot open " << "students.txt" << endl; exit(1);}
    populate();
    srand(time(NULL));
    char key;
    int n = 5;
    //n = int(argv[1]);
    int w = 15;
    for (int i=0; i<n; i++) randomize();
    // while (1)
    // {
    //     cin >> key;
    //     if (key == 'r') randomize();
    //     else if (key == 'e') break;
    // }
    // cout << "name" << setw(w) << "id" << setw(w) << "days_detected" << setw(w) 
    //      << "days_detected_consecutive" << setw(w) << "days_undetected" << setw(w) 
    //      << "days_undetected_consecutive" << endl;
    for (auto &s : Students)
    {
        of << s.name << " " << s.id << " " << s.days_detected << " " << s.days_undetected_consecutive << "\n";
        // cout << s.name << setw(w) << s.id << setw(w) << s.days_detected << setw(w) 
        // << s.days_detected_consecutive << setw(w) << s.max_streak_detected << setw(w) 
        // << s.days_undetected << setw(w) << s.days_undetected_consecutive << setw(w) 
        // << s.max_streak_undetected << endl;
    }
    of.close();
    return 0;
}
