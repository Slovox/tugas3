#include <iostream>

using namespace std;

class Jarak
{
	private:
		int kaki, inci;

	public:
		Jarak(){}

		Jarak(int kaki, int inci): kaki(kaki), inci(inci){}
	
		Jarak operator+ (const Jarak &obj)
		{
			int kakiTotal = kaki + obj.kaki;
			int inciTotal = inci + obj.inci;

			if (inciTotal >= 12)
			{
				kakiTotal += inciTotal / 12;
				inciTotal %= 12;
			}
			return Jarak(kakiTotal, inciTotal);
		}

		Jarak operator- (const Jarak &obj)
		{
			int kakiTotal = kaki - obj.kaki;
			int inciTotal = inci - obj.inci;

			if (inciTotal < 0)
			{
				kakiTotal += inciTotal / 12 - 1;
				inciTotal = 12 + inciTotal % 12;
			}
			return Jarak(kakiTotal, inciTotal);
		}

		void printJarak()
		{
			cout << "kaki : " << kaki << "\tinci : " << inci << endl;
		}
};

int main()
{
	Jarak d1(1,11);

	d1.printJarak();
	d1 = d1 + Jarak(2,26);
	cout << "Setelah Penjumlahan " << endl;

	d1.printJarak();
	d1 = d1 - Jarak(1,2);
	cout << "Setelah Pengurangan " << endl;

	d1.printJarak();

	return 0;
}