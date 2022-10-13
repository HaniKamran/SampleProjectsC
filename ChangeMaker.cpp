/******************************************************************************
First we get the amount of change needed
Then we return how many max dollars of change we can give
Then we return how many max numbers of quarters,nickels,dimes and penny's of change we can give
We can have a max of 3 quarters, 2 dimes 1 nickel, and 4 penny's

First we get an input of the amount of coins which are all ints
The output would be the number of coins left over which would be ints.
*******************************************************************************/
#include <stdio.h>

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    
    //Will be the amount of each displayed in output
    int numPenny,numNickel,numDime,numQuarter,numDollar;
    double totalChange;
   
    //sets all of the numbers equal to 0
    // if we don't do this the location will be returned in the output instead of 0
    numPenny = 0;
    numNickel = 0;
    numDime = 0;
    numQuarter = 0;
    numDollar = 0;
    
    
    // Enter the amount we need to break into change
    cout << "Enter the change amount to make in dollars: ";
    cin >> totalChange;
    
    //round the totalChange
    totalChange = round(totalChange / .01);
    
    // Gets the number of dollars
    numDollar = totalChange / 100;
    
    // Makes the totalChange equal to the change minus the number of dollars which is 100 pennies
    totalChange = totalChange - (numDollar*100);
   
    // Gets the number of quarters
    numQuarter = totalChange / 25;
    
    // Makes the totalChange equal to the change minus the number of quarters which is 25 pennies
    totalChange = totalChange - (numQuarter*25);
    
    // Gets the number of dimes and gets the change, since the change is in pennies we multiply by 10
    numDime = totalChange / 10;
    totalChange = totalChange - (numDime*10);
    
    // Gets the number of nickels and gets the change, since the change is in pennies we multiply by 5
    numNickel = totalChange / 5;
    totalChange = totalChange - (numNickel*5);
    
    // get the number of pennies
    numPenny = totalChange /1;
    totalChange = totalChange - (numPenny*1);
    
    
    
    //Prints out the change due
    cout<<"Change due: " << endl << endl;
    
    cout << "\t"<< numDollar <<" dollars" << endl;
    cout << "\t"<< numQuarter <<" quarters"<< endl;
    cout << "\t"<< numDime <<" dimes"<< endl;
    cout << "\t"<< numNickel <<" nickels"<< endl;
    cout << "\t"<< numPenny <<" pennies"<< endl;
}