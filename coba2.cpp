#include<iostream>
#include<limits>
using namespace std;
int main()
{

    cout << "Enter an int: ";
    int x = 0;
    while(!(cin >> x) || (x < 0))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Invalid input.  Try again: ";
    }
        // if (x < 0)
        //  {
        //        cout << "display error message." << endl;
        //        //ask for input again
        //  }
     
    cout << "You enterd: " << x << endl;        
}