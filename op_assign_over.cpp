#include <iostream>

using namespace std;

class Jarak
{
	private:
		int kaki,inci;

	public:
		Jarak(): kaki(0), inci(0){}
		Jarak(int kaki, int inci): kaki(kaki), inci(inci){}

		Jarak operator = (const Jarak &obj)
		{
			kaki = obj.kaki;
			if (obj.inci >= 12)
			{
				kaki += obj.inci / 12;
				inci = obj.inci % 12;
			}
			return Jarak(kaki, inci);
		}

		void printjarak()
		{
			cout << "kaki: " << kaki << "\tinci: " << inci << endl; 
		}
};

int main()
{
	Jarak d(2,3);

	d = Jarak(1, 32);
	d.printjarak();

	return 0;
}