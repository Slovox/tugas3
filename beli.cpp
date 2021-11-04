#include <iostream>
#include <limits>

using namespace std;

class Pembayaran
{
	private:
		string nama  = "Budi";
		int x, y;
		int biaya = 50000;

	public:
		int saldo = 2000000;
		
		void set1(int a)
		{
			x = a;
		}
		void set2(int b)
		{
			y = b;
			// z = c;
		}

		int bayar()
		{
			return saldo - x; 
		}
		// int get2()
		// {
		// 	cout << "Biaya yang akan dibayarkan : "<<; 
		// }

		void tampil()
		{
			cout << "Nama : " << y << endl;
		} 

		// void beli()
		// {
		// 	int saldo = 2000000;
			
		// 	int pilih, id_number;
		// 	string nama_tkt;

		// 	fstream fi;
  //   		fi.open("akun2.txt", ios::in | ios::app);

		// 	cout << "Masukkan nama pemesan : ";
		// 	getline(cin, nama_tkt);

		// 	cout << "Masukkan Nomor Identitas : ";
		// 	cin >> id_number;

		// 	cout << "Pilih Tujuan : ";
		// 	cout << "1. Medan" << endl;
		// 	cout << "2. Siantar" << endl;
		// 	while(!(cin >> pilih))
  //   			{
       				
  //       			cin.clear();
  //       			cin.ignore(numeric_limits<streamsize>::max(), '\n');
  //       			cout << "Masukkan Jumlah dalam bentuk angka.  Try again: ";
    				    			
  //   			}
		// 		switch(pilih)
		// 		{
		// 			case 1:
		// 				cout << "Harga : Rp.50.000" << endl; 
		// 				saldo -= harga1;
		// 				break;
		// 			case 2:
		// 				cout << "Harga : Rp.45.000" << endl; 
		// 				saldo -= harga2; 
		// 				break;
		// 			default:
		// 				cout << "\n\t -----Warning! Masukkan Opsi yang Tersedia-----\n" << endl;

		// 				break;
		// 		}
		// 	cout << "Tiket Berhasil Dipesan" << endl;
		// 	fi.close();
		// }


};



int main()
{
	int bayar;
	Pembayaran pbr;

	// cout << "Masukkan biaya yang akan dibayarkan: ";
	// cin >> bayar;
	pbr.set1(bayar);
	pbr.set2(bayar);

	// cout <<"Nama : " << pbr.tampil() << endl;

	cout << "Sisa saldo Anda " << pbr.get();

}