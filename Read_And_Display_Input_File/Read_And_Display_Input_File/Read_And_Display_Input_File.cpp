// Write a program to read the content from a file
// The format of the file is :
// <INT>     <DOUBLE>      <STRING>
//    where INT is the id
//    the DOUBLE is the grade
//    the String is the netid

// For Example:
// 23  89.67   abcd123456
// 78  89.89   bedf345678

//Read the file content and display it on the screen

//Symbolic constant
// Assuming that the largest amount of net id's is 100
#include <iostream>
#include <fstream>
#include <iostream>
#include <iomanip>

#define MAX_NUM_RECORD 100
using namespace std;
int main()
{

    int id[MAX_NUM_RECORD];
    double grade[MAX_NUM_RECORD];
    string netid[MAX_NUM_RECORD];


    ifstream input;
    input.open("C:\\Users\\hanik\\source\\repos\\Read_And_Display_Input_File\\Read_And_Display_Input_File_Actual_Input.txt");

    if (!input.is_open())
    {
        cout << "Error opening the file\n";
        return -1;
    }


    int index = 0;
    while (!input.eof() && index < MAX_NUM_RECORD)
    {
        input >> id[index];
        input >> grade[index];
        input >> netid[index];

        cout << netid[index] << "\t" << grade[index] << "\t" << id[index] << endl;
        index++;
    }

    return 0;
}


