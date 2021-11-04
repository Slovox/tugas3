#include <iostream>
using namespace std;

class angka
{
	public:

		int count = 0;
		int anumber = 0;

		void hitung()
		{
			cout<<"Berikan satu bilangan: ";
			cin>>anumber;
		
			for(int i=5;i<=anumber;i*=5)
			{
				count += anumber/i;
			}
		}

		void printangka()
		{
	
			cout<<"Nol di depan " <<anumber;
			cout<<"! = "<< count <<endl;
		}
};


int main()
{
	angka htg;
	// angka agk;

	htg.hitung();

	htg.printangka();
	
	return 0;
}