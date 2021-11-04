#include <iostream>

using namespace std;

class BangunRuang2D
{
	protected:
		int lebar,tinggi;

	public:
		BangunRuang2D( int num1=0, int num2=0)
		{
			lebar = num1;
			tinggi = num2;
		}
		virtual int luas()
		{
			cout << "Fungsi dipanggil dari super class BangunRuang2D" << endl;
			return 0;
		}
};

class Persegi: public BangunRuang2D
{
	public:
		Persegi( int num1 = 0, int num2 = 0) : BangunRuang2D(num1,num2) {}
		
		int luas()
		{
			cout << "Fungsi dipanggil dari sub class (Persegi)" << endl;
			return (lebar * tinggi);
		}
};

class Segitiga: public BangunRuang2D
{
	public:
		Segitiga(int num1 = 0, int num2 = 0) : BangunRuang2D(num1,num2) {}
		
		int luas()
		{
			cout << "Fungsi ini dipanggil dari sub class (Segitiga)" << endl;
			return (lebar * tinggi / 2);
		}
};

// int main()
// {
// 	BangunRuang2D bgn(4, 9);
// 	Persegi psg(8, 15);
// 	Segitiga sgt(7, 14);

// 	cout << bgn.luas() << endl;
// 	cout << psg.luas() << endl;
// 	cout << sgt.luas() << endl;

// 	return 0;
// }

int main()
{
	BangunRuang2D bgn(4, 9);
	Persegi psg(8, 15);
	Segitiga sgt(7, 14);

	BangunRuang2D *bngn;

	bngn = &bgn;
	cout << bngn->luas() << endl;

	bngn = &psg;
	cout << bngn->luas() << endl;

	bngn = &sgt;
	cout << bngn->luas() << endl;

	return 0;
}