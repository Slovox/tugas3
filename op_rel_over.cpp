#include <iostream>

using namespace std;

class Jarak
{
	private:
		int kaki, inci;

	public:
		Jarak(): kaki(0), inci(0){}
		Jarak(int kaki, int inci): kaki(kaki), inci(inci){}

	bool operator > (const Jarak &obj)
	{
		int total = kaki * 12 + inci;
		int objTotal = obj.kaki * 12 + obj.inci;

		return (total >= objTotal);
	}

	bool operator < (const Jarak &obj)
	{
		int total = kaki * 12 + inci;
		int objTotal = obj.kaki * 12 + obj.inci;

		return (total <= objTotal);
	}

	bool operator == (const Jarak &obj)
	{
		int total = kaki * 12 + inci;
		int objTotal = obj.kaki * 12 + obj.inci;

		return (total == objTotal);
	}
};

int main()
{
	Jarak d1(10,10), d2(10,10);
	if (d1 == d2)
		cout << "d1 sama dengan d2" << endl;
	
	Jarak d3(1,5), d4(2,10);
	if(d3 == d4)
		cout << "d3 sama dengan d4" << endl;
	if(d3 < d4)
		cout << "d3 lebih kecil d4" << endl;
	if(d3 > d4)
		cout << "d3 lebih besar d4" << endl;

	return 0;
}