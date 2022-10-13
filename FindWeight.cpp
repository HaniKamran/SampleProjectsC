#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double kg, earth,venus,mars;
    string earthStr, venusStr, marsStr;
    
    cout <<"Please enter the mass in kilograms:" << endl;
    cin >> kg;


    earth = kg * 9.807;
    venus = kg * 8.87;
    mars = kg * 3.7;
    
    if(kg <= 0.0)
    {
        cout << "Mass must be greater than zero";
    }
    
    if(earth > 1500.00)
    {
        earthStr = "\tThe object is heavy";
    }
  
    if(earth <5.0)
    {
        earthStr = "\tThe object is light";
    }
  
    
    cout <<"Planet\t    " << "Weight (N)" <<endl << endl;
    
    
    cout << fixed << left <<"Earth \t" 
         << right << setw(14) << setprecision(4) << earth << earthStr <<endl;
    
    cout << left <<"Venus \t" 
         << right << setw(14) << setprecision(4) << venus <<endl;
    
    cout << left <<"Mars  \t" 
         << right << setw(14) << setprecision(4) << mars << endl;
    
    return 0;
}