#include <iostream>
using namespace std;

class Diskon
{
	public:
		double d1,d2;
		
		// Default Constructor
		
		Diskon()
		{
			d1 = 0.1;
			d2 = 0.2;
		}
};

int main()
{
	// Default Constructor dipanggil secara otomatis
	// pada saat objek diinisialisasi
	
	Diskon dkn;
	cout << "Diskon 1: " << dkn.d1 << '\n';
	cout << "Diskon 2: " << dkn.d2 << '\n';
	
	return 0;
}
