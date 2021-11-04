#include <iostream>
#include <fstream>
#include <vector>
using namespace std;


class akun
{
	private:
		int saldo = 0;

	public:

		int get()
		{
			return saldo;
		}

		int cek_pin()
		{
			std::vector<int> numbers;
			int pinned;
			
			fstream my_file;

			my_file.open("kasir.txt", ios::in);

			while(my_file >> pinned)
			{
				numbers.push_back(pinned);
				// my_file >> pinned;

			// if(my_file.eof())
			// 	break;

			// 	cout << pinned;
			}
			for (const auto &i : numbers)
			{
				cout << i << endl;
			}
			
			my_file.close();

			return 0;
		}	



};

// class hitung : public akun
// {
// 	public:
		
// 		void tampil()
// 		{
// 			cout << "\nHasilnya adalah\t\t\t\t\t : " << hasil<< endl; 
// 		}
// };

// int main()
// {
// 	int pilih;

// 	bangun_datar bgndtr;
// 	hitung htg;

// 	while(pilih != 4) 
// 	{

// 			cout << "\t\t Mencari Luas Bangun Datar \t\t" << endl;
// 			cout << "1. Persegi" << endl;
// 			cout << "2. Segitiga" << endl;
// 			cout << "3. Layang-Layang\n" << endl;
// 			cout << "4. Keluar" << endl;
// 			cout << "Masukkan Pilihan Anda: " ;
// 			cin >> pilih;
				
// 		switch(pilih)
// 		{
// 			case 1:
// 				htg.mulai();
// 				htg.kalkulasi(pilih);
// 				htg.tampil(); 
// 				break;

// 			case 2:
// 				htg.mulai();
// 				htg.kalkulasi(pilih);
// 				htg.tampil(); 
// 				break;

// 			case 3:
// 				htg.mulai();
// 				htg.kalkulasi(pilih);
// 				htg.tampil(); 
// 				break;	

// 			case 4:
// 				break;

// 			default:
// 				cout << "\n\t -----Masukkan Opsi yang Tersedia-----\n" << endl;

// 				break;
// 		}
		
// 	}	

// 	return 0;
// }

int main()
{
	int num;
	string cek;

	akun akn;

	cout << "Masukkan PIN anda : ";
	cin >> num;

	if (akn.cek_pin() != '123456')
	{
		cout << "pin anda salah" << endl;
	}
	else
	{
		cout << "lol" << endl;
	}

	
	// cout << i << endl;

	// cout << i*num << endl;
	// cout << akn.get() << endl;

	cout << num;

	

	return 0;
}