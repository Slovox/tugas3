#include <iostream>
#include <limits>
#include <time.h>

using namespace std;

class Pembayaran
{
	private:
		string nama  = "Budi";
		string x;
		int y;
		int biaya = 50000;

	public:
		int saldo = 2000000;
		
		void set1(int a)
		{
			x = nama;
		}
		void set2(int b)
		{
			y = biaya;
			
		}

		int bayar()
		{
			return saldo - y; 
		}
		int get2()
		{
			cout << "Biaya yang akan dibayarkan : "<< y << endl;
			return y; 
		}

		void tampil()
		{
			cout << "Nama\t\t\t : " << x << endl;
		} 

};



int main()
{
	int bayar, resi, pilih;
	int accountnumber;
	srand(time(0));

	Pembayaran pbr;
	accountnumber = rand();
	cout << "\nResi anda : " << accountnumber;
	
	cout << "\nMasukkan Resi anda: ";
	cin >> resi;
	pbr.set1(resi);
	pbr.tampil();
	pbr.set2(resi);
	pbr.get2();

	cout << "Apakah anda ingin membayar ?" << endl;
	cout << "1. YA" << endl;
	cout << "2. Tidak" << endl;
	cin >> pilih;
	if(pilih == 1)
	{
		cout << "Transaksi Sukses" << endl;
		cout << "Sisa saldo Anda " << pbr.bayar() << endl;

	}
	else
		cout << "Transaksi Dibatalkan" << endl;
		
}