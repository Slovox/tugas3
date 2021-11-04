#include <iostream>
#include <string>
#include <limits>
#include <fstream>
#define MIN_SALDO 1000000

using namespace std;

class Nasabah
{
	private:
		double a, b;
		string nama = "Budi";

		int pin = 123456;
	protected:
		int saldo = 2000000;

	public:
		int x;
		

		void tampil()
		{
			// cout << "\nNama\t\t: " << nama << endl;
			cout << "isi saldo anda\t: " << saldo << endl;
		}
		
		void tarikUang()
		{
    		// int x;

			cout << "Masukkan Nominal: ";
    		
    		
    			while(!(cin >> x) || (x > 10000000))
    			{
       				
        			cin.clear();
        			cin.ignore(numeric_limits<streamsize>::max(), '\n');
        			cout << "Masukkan Jumlah dalam bentuk angka.  Try again: ";
    				    			
    			}
    		if((saldo - x) < MIN_SALDO)
    		{
    			cout << "Penarikan Gagal. Saldo anda melewati batas minimum saldo tersimpan" << endl;
    			cout << "Saldo Anda Sekarang: " << saldo;
    		}
			else
			{
    			cout << "\n-----Penarikan sebesar " << x << " Berhasil-----\n" << endl;
    			saldo -= x;
    		}
 		}

 		void deposit()
		{
    		// int x;

			cout << "Masukkan Nominal: ";
    		
    		
    			while(!(cin >> x) || (x > 10000000) || (x < 0))
    			{
       				
        			cin.clear();
        			cin.ignore(numeric_limits<streamsize>::max(), '\n');
        			cout << "Masukkan Jumlah dalam bentuk angka.  Try again: ";
    				    			
    			}
    		if((saldo - x) < MIN_SALDO)
    		{
    			cout << "Penarikan Gagal. Saldo anda melewati batas minimum saldo tersimpan" << endl;
    			cout << "Saldo Anda Sekarang: " << saldo;
    		}
			else
			{
    			cout << "\n-----Deposit sebesar " << x << " Berhasil-----\n" << endl;
    			saldo -= x;
    		}
 		}

 		int getpin()
		{
			return pin;
		}

		// void beli()
		// {
			
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
	int choice, pinned;

	Nasabah nasabah1;

	

	

	cout << "\n\t\t\tMasukkan PIN anda: ";
	
	while(!(cin >> pinned))
		{
				
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Masukkan dalam bentuk angka saja.  Coba lagi: ";
			
		}
			if (pinned < 0)
		    {
		        cout << "Error." << endl;
		        //ask for input again
		    }
	


	if(nasabah1.getpin() == pinned)
	{
		while(choice != 6)
		{
			cout << "\n\t\t\t===========================================";
			cout << "\n\t\t\t\t\t Bank JAGO \t\t"<< endl;
			cout << "\t\t\t===========================================" << endl;
			cout << "\t\t\t\t1. Lihat Saldo" << endl;
			cout << "\t\t\t\t2. Deposit" << endl;
			cout << "\t\t\t\t3. Tarik Uang" << endl;
			cout << "\t\t\t\t4. Pembelian" << endl;
			cout << "\t\t\t\t5. Pembayaran" << endl;
			cout << "\t\t\t\t6. Keluar\n" << endl;
			cout << "\t\t\t\tMasukkan Pilihan Anda: " ;
			// cin >> choice;
				
			while(!(cin >> choice))
    			{
       				
        			cin.clear();
        			cin.ignore(numeric_limits<streamsize>::max(), '\n');
        			cout << "Masukkan Jumlah dalam bentuk angka.  Try again: ";
    				    			
    			}

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

				// case 4:
				// 	tkt.beli();
				// 	break;	

				case 6:
					break;

				default:
					cout << "\n\t -----Warning! Masukkan Opsi yang Tersedia-----\n" << endl;

					break;
			}
		}
	}		
				
	else
	{
		cout << "\n\t\t\tPIN Anda Salah" << endl;
	}
	

	return 0;
}