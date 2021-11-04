#include <iostream>
#include <string>
#include <limits>
#define MIN 20000

using namespace std;

class Nasabah
{
	private:
		string nama = "Budi";
		int saldo = 20000;

	public:

		void tampil()
		{
			cout << "\nNama\t\t: " << nama << endl;
			cout << "isi saldo anda\t: " << saldo << endl;
		}
		
		void tarikUang()
		{
    		int x;

			cout << "Masukkan Nominal: ";
    		
    		
    			while(!(cin >> x) || (x > 10000000))
    			{
       				
        			cin.clear();
        			cin.ignore(numeric_limits<streamsize>::max(), '\n');
        			cout << "Masukkan Jumlah dalam bentuk angka.  Try again: ";
    				    			
    			}
    		if(x - saldo < MIN)
    		{
    			cout << "penarikan gagal" << endl;
    		}
			else
			{
    			cout << "\n-----Penarikan sebesar " << x << " Berhasil-----\n" << endl;
    			saldo -= x;
    		}
 		}
};

class barang
{
	public:

		void barang()
		{

		}
}

int main()
{
	int choice;

	Nasabah nasabah1;
	

	while(choice != 4) 
	{

			cout << "\t\t Bank JAGO \t\t" << endl;
			cout << "1. Lihat Saldo" << endl;
			cout << "2. Simpan Uang" << endl;
			cout << "3. Tarik Uang\n" << endl;
			cout << "4. Keluar" << endl;
			cout << "Masukkan Pilihan Anda: " ;
			cin >> choice;
				

		switch(choice)
		{
			case 1:
				nasabah1.tampil(); 
				break;

			// case 2:
			// 	nasabah1.simpanUang();
			// 	break;

			case 3:
				nasabah1.tarikUang();
				break;

			case 4:
				break;

			default:
				cout << "\n\t -----Warning! Masukkan Opsi yang Tersedia-----\n" << endl;

				break;
		}
		
	}	

	return 0;
}