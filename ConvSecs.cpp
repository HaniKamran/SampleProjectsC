#include <iostream>
using namespace std;

int main()
{
    
    long long int numDays, numHours, numMinutes;
    long long int seconds;
    
    long long int daySecs = 60*60*24;
    long long int hourSecs = 60*60;
    long long int minSecs = 60;
    
    cout << "Number of seconds:";
    cin >> seconds;
    
    if(seconds <= 0)
    {
        cout << "\nseconds must be greater than zero" <<endl; 
    }
    
    
    numDays = seconds/daySecs;
    seconds = seconds - (numDays * daySecs);
    
    numHours = seconds/hourSecs;
    seconds = seconds - (numHours * hourSecs);
    
    numMinutes = seconds/minSecs;
    seconds = seconds - (numMinutes * minSecs);
    
    if(numDays != 0)
    {
        cout << "\nDay(s): " << numDays <<endl;  
    }
    if(numHours != 0)
    {
        cout << "Hour(s): " << numHours <<endl;    
    }
    if(numMinutes != 0)
    {
        cout << "Minute(s): " << numMinutes <<endl;
    }
    if(seconds != 0 && seconds >= 0)
    {
        cout << "Remaining second(s): " << seconds << endl;
    }
    
    return 0;
}