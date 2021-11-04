#include <iostream>
#include <string>
#include <limits>
#include <time.h>
#include <fstream>
#define MIN_SALDO 1000000

using namespace std;

class Nasabah
{
	private:
		double a, b;
		string nama = "Budi";

		int pin = 123456;
	
		

	public:
		int x;
		int saldo = 2000000;
		
 		int getpin()
		{
			return pin;
		}

		void tampil()
		{
			cout << "isi saldo anda\t: " << saldo << endl;
		}

		
};

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
        			cout << "Masukkan dalam bentuk angka.  Try again: ";
    				    			
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
        			cout << "Masukkan dalam bentuk angka.  Try again: ";
    				    			
    			}
    		// if((saldo - x) < MIN_SALDO)
    		// {
    		// 	cout << "Penarikan Gagal. Saldo anda melewati batas minimum saldo tersimpan" << endl;
    		// 	cout << "Saldo Anda Sekarang: " << saldo;
    		// }
			if(saldo > 0)
			{
    			cout << "\n-----Deposit sebesar " << x << " Berhasil-----\n" << endl;
    			saldo += x;
    		}
    		return saldo;
 		}

		
};

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
	
class Saldo
{
	public:
		int saldo = 2000000;

		
};

class Pembelian: public Saldo
{
	int accountnumber;
    char name[30];
    int deposit;
    char type;
    int id;
    char asal[30];
    char tujuan[30];

	public:
		int harga_tiket = 50000;
		int trans;


		void create_account()
		{
			accountnumber = rand();
	        cout << "\nThe account Number is : " << accountnumber;
	        cout << "\nMasukkan Nama Penumpang : ";
	        cin.ignore();
	        cin.getline(name, 30);
	        cout << "\nMasukkan no ktp: ";
	        cin >> id;
	        
	        cout << "\nAsal keberangkatan: ";
	        cin.ignore();
	        cin.getline(asal, 30);
	        cout << "\nTujuan keberangkatan: ";
	        
	        cin.getline(tujuan, 30);
	        cout << "\nHarga tiket : " << harga_tiket;
	        cout << "\nLanjutkan Transaksi ?"<< endl;
	        cout << "1. Ya" << endl;
	        cout << "2. Tidak" << endl;
	        cin >> trans;

	        if(trans == 1)
	        {
	        	cout << "Transaksi Berhasil" <<endl;
	        	saldo - harga_tiket;
	        	
	        }
	        if(trans == 2)
	        	cout << "\n\n\nTransaksi Gagal...";
		}

		void show_account()
		{
	        cout << "\nAccount Number: " << accountnumber;
	        cout << "\nAccount Holder Name: " << name;
	        cout << "\nAsal keberangkatan: " << asal;
	        cout << "\nTujuan keberangkatan: " << tujuan;
	        cout << "\nHarga Tiket: " << harga_tiket << endl;
	        if (trans == 1)
	        {
	        	cout << "Transaksi Berhasil" << endl;
	        	cout << "\nSaldo Akhir: " << saldo - harga_tiket;
	        }
	        else
	        {	
	        	cout <<"Transaksi Batal" << endl;
	        	cout << "\nSaldo Akhir: " << saldo;
	        }		
		}

		int get_accountnumber()
		{
		    return accountnumber;
		}

		
};

// class Bayar
// {

// }

void write_account();
void display_sp(int);
void bayar();

int main()
{
	int choice, pinned, num;

	

	

	Pembelian pbl;
	srand(time(0));

	Nasabah nasabah1;

	TarikUang trk;
	Deposit dpst;

	Uang *uang;	

	

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
		while(choice != 7)
		{
			cout << "\n\t\t\t===========================================";
			cout << "\n\t\t\t\t\t Bank JAGO \t\t"<< endl;
			cout << "\t\t\t===========================================" << endl;
			cout << "\t\t\t\t1. Lihat Saldo" << endl;
			cout << "\t\t\t\t2. Tarik Uang" << endl;
			cout << "\t\t\t\t3. Deposit" << endl;
			cout << "\t\t\t\t4. Pembelian" << endl;
			cout << "\t\t\t\t5. Lihat Info Pembelian" << endl;
			cout << "\t\t\t\t6. Pembayaran" << endl;
			cout << "\t\t\t\t7. Keluar\n" << endl;
			cout << "\t\t\t\tMasukkan Pilihan Anda: " ;
			// cin >> choice;
				
			while(!(cin >> choice))
    			{
       				
        			cin.clear();
        			cin.ignore(numeric_limits<streamsize>::max(), '\n');
        			cout << "Masukkan dalam bentuk angka.  Try again: ";
    				    			
    			}

			switch(choice)
			{
				case 1:
					nasabah1.tampil(); 
					break;

				case 2:
					uang = &trk;
					uang->hitung();
					break;

				case 3:
					uang = &dpst;	
					uang->hitung();
					break;

				case 4:
					write_account();
					break;

				case 5:
					cout << "\n\n\tEnter The account No. : ";
                    cin >> num;
                    display_sp(num);
                    break;

				case 6:
					bayar();
					break;

				case 7:
					cout << "\n\n\tTerima Kasih" << endl;
					break;

				default:
					cout << "\n\t -----Warning! Masukkan Opsi yang Tersedia-----\n" << endl;

					// break;
			}
				cin.ignore();
	            cin.get();
	            if (choice == 7)
	                    break;
		}
	}		
				
	else
	{
		cout << "\n\t\t\tPIN Anda Salah" << endl;
	}
	

	return 0;
}

void write_account()
{
    Pembelian pbl;
    ofstream outFile;
    outFile.open("akun3.txt", ios::binary | ios::app);
    pbl.create_account();
    outFile.write(reinterpret_cast<char *>(&pbl), sizeof(Pembelian));
    outFile.close();
}

void display_sp(int n)
{
        Pembelian pbl;
        bool flag = false;
        ifstream inFile;
        inFile.open("akun3.txt", ios::binary);
        if (!inFile)
        {
                cout << "File could not be open !! Press any Key...";
                return;
        }
        cout << "\nDetail Pembelian\n";

        while (inFile.read(reinterpret_cast<char *>(&pbl), sizeof(Pembelian)))
        {
                if (pbl.get_accountnumber() == n)
                {
                        pbl.show_account();
                        flag = true;
                }
        }
        inFile.close();
        if (flag == false)
                cout << "\n\nAccount number does not exist";
}

void bayar()
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