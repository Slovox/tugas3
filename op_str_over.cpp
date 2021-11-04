#include <iostream>

using namespace std;

class Jarak
{
	private:
		int kaki, inci;
	public:
		Jarak(): kaki(0), inci(0){}
		Jarak(int kaki, int inci): kaki(kaki), inci(inci){}

	friend istream &operator >> (istream &input, Jarak &obj)
	{
		cout << "Masukkan nilai kaki : ";
		input >> obj.kaki;
		cout << "Masukkan nilai inci : ";
		input >> obj.inci;

		return input;
	}

	friend ostream &operator << (ostream &output, const Jarak &obj)
	{
		output << "Nilai kaki : " << obj.kaki << endl
			<< "Nilai inci : " << obj.inci << endl;

		return output;
	} 
};

int main()
{
	Jarak d;
	cin >> d;
	cout << d;

	return 0;
}