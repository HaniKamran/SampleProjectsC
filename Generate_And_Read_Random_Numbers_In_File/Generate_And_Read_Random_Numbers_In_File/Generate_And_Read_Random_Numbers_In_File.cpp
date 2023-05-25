// Write a program to generate random numbers between 0 and 10.
// The number of samples is N defined as a sybolic constant with value 100
// The samples are written to a file

// Once completed, then read the file and determine the numbers of 0's, 1's, 2's,..., 10's generated

#include <iostream>
#include <fstream>
#include <iostream>
#include <iomanip>

//Symbolic constant
// Assuming that the largest amount of n ids is 100
#define N 100

using namespace std;
int main()
{
    ofstream output;
    output.open("C:\\Users\\hanik\\source\\repos\\Generate_And_Read_Random_Numbers_In_File\\GeneratedNums.txt");

    if (!output.is_open())
    {
        cout << "Error opening the file\n";
        return -1;
    }

    //Generate the N samples
    int counter = 0;
    while (counter < N)
    {
        int random = 0 + rand() % (10 + 1);
        output << random << "\n";
        counter++;
    }
    output.close();

    //Part 2
    ifstream input;
    input.open("C:\\Users\\hanik\\source\\repos\\Generate_And_Read_Random_Numbers_In_File\\GeneratedNums.txt");

    if (!input.is_open())
    {
        cout << "Error opening the file\n";
        return -2;
    }

    //Generate the N samples
    counter = 0;
    int values[11] = { 0 }; //For values 0 to 11, all initialized to 0
    int number;
    while (!input.eof() && counter < N)
    {
        input >> number;
        values[number]++;
        counter++;
    }

    input.close();

    for (int i = 0; i < sizeof(values) / sizeof(values[0]); i++)
    {
        cout << "THe number of " << i << "'s is: " << values[i] << endl;
    }
    return 0;
}

