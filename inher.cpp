#include <iostream>
#include <string>
#include <limits>
#include <time.h>
#include <fstream>
#define MIN_SALDO 1000000

using namespace std;

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

void write_account();
void display_sp(int);

int main()
{
	Pembelian pbl;
	srand(time(0));
	int option,num;

	

	for (;;)
	{
		cout << "\n\t\tPress 1 to pembelian";
		cout << "\n\t\tPress 2 to lihat pembelian";
		cout << "\n\t\tPress 3 to lihat Saldo";
		cout << "\n\t\tPress 4 to Exit"<< endl;
		cin >> option;
		switch (option)
                {
                case 1:
                        
                        write_account();
                        break;
                case 2:
                       
                        cout << "\n\n\tEnter The account No. : ";
                        cin >> num;
                        display_sp(num);
                        break;
                
                case 4:
                        
                        cout << "\n\n\tTerima Kasih" << endl;
                        break;
                default:
                        cout << "Invalid Option\n";
                }
                cin.ignore();
                cin.get();
                if (option == 4)
                        break;
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