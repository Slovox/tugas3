#include <iostream>
#include <fstream>
#include <cctype>
#include <iomanip>
#include <time.h>
#include <stdlib.h>

using namespace std;

class akun
{
        int accountnumber;
        char name[30];
        int deposit;
        // char type;

	public:
        void create_account()
        {

	        accountnumber = rand();
	        cout << "\nThe account Number is : " << accountnumber;
	        cout << "\nEnter The Name of The account Holder : ";
	        cin.ignore();
	        cin.getline(name, 30);
	        // cout << "\nEnter account type (enter s - saving or c - credit): ";
	        // cin >> type;
	        type = toupper(type);
	        cout << "\nEnter The Initial amount(500 or more for Saving and 1000 or more for current ): ";
	        cin >> deposit;
	        cout << "\n\n\nAccount Created Successfully...";

        }
        void show_account()
        {
	        cout << "\nAccount Number: " << accountnumber;
	        cout << "\nAccount Holder Name: " << name;
	        // cout << "\nType of Account: " << type;
	        cout << "\nBalance amount: " << deposit;
		}
       
        void deposit_funds(int x)
        {
		    deposit += x;
		}
        void draw_funds(int x)
        {
	        deposit -= x;
		}
        void get_report();
        int get_accountnumber();
        int get_funds();
        char get_accounttype();
};