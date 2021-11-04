#include <iostream>
#include <string>
#include <limits>
#define MIN_SALDO 1000000

using namespace std;

class Uang
{
	protected:
		int x, saldo = 2000000;

	public:

		virtual int hitung()
		{
			cout << "Transaksi Berhasil" << endl;

			return 0;
		}

};

class TarikUang: public Uang
{
	public:
		

		int hitung()
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
    			cout << "\n-----Penarikan sebesar " << x << " Berhasil-----\n" << endl;
    			saldo -= x;
    		}
    		return saldo;
 		}
};
class Deposit: public Uang
{
	public:

 		int hitung()
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
    		return saldo;
 		}

		
};

int main()
{
	int pilih;

	TarikUang trk;
	Deposit dpst;

	Uang *uang;

	cout <<"pilih:" ;
	cin >> pilih;
	switch(pilih)
			{
				case 1:
					uang = &trk;
					uang->hitung();
					break;

				case 2:
					uang = &dpst;	
					uang->hitung();
					break;
				default:
					cout << "\n\t -----Warning! Masukkan Opsi yang Tersedia-----\n" << endl;

					break;
			}
	
}

