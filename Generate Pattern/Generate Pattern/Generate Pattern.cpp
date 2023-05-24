#include <iostream>
#include <iomanip>

// This project takes an input of n and prints it out in a pattern
// Ex: n=3
// 3 3 3
// 3 3
// 3

using namespace std;
int main()
{
    int n;

    cout << "Type in n: ";
    cin >> n;

    for (int rows = n; rows > 0; rows--)
    {
        for (int col = rows; col > 0; col--)
        {
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}