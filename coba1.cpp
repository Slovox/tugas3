#include <iostream>
#include <string>
#include <limits>

using namespace std;


class Nasabah{
	private:

		string nama;
		int saldo;

	public:
		Nasabah(const char* nama){
			this->nama = nama;
			this->saldo = 0;
		}

		string getNama(){
			return this->nama;
		}


		int lihatSaldo(){
			return this->saldo;
		}



		void tarikUang(){
			cout << "Masukkan Nominal: ";
    		int x = 0;
    		
    		
    			while(!(cin >> x) || (x < 0) || (x > 10000000)){
       
        			cin.clear();
        			cin.ignore(numeric_limits<streamsize>::max(), '\n');
        			cout << "Masukkan dalam bentuk angka.  Try again: ";
    				}


    		cout << "\n-----Penarikan sebesar " << x << " Berhasil-----\n" << endl;

    		this->saldo -= x;
 		}




		

		void simpanUang(){
			cout << "Masukkan Nominal: ";
    		int x = 0;
    			
    			while(!(cin >> x) || (x < 0) || (x > 10000000)){
        			cin.clear();
        			cin.ignore(numeric_limits<streamsize>::max(), '\n');
        			cout << "Invalid input.  Try again: ";
    				}
    			
    			
    		cout << "\n-----Transaksi sebesar " << x << " Berhasil-----\n" << endl;

    		this->saldo += x;
		}

		




		void display(){
			cout << "\nNama\t\t: " << this->nama << endl;
			cout << "isi saldo anda\t: " << this->saldo << endl;
		}
};




int main()
{
	int choice;

	Nasabah nasabah1 = Nasabah("Budi");
	//nasabah1.display();
	
	
	//cout << "Nama\t\t: " << nasabah1.getNama() << endl;
	
	//nasabah1.simpanUang();
	//cout << "isi saldo anda\t: " << nasabah1.lihatSaldo() << endl;
	while(choice != 4) {

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
				nasabah1.display(); 
				break;

			case 2:
				nasabah1.simpanUang();
				break;

			case 3:
				nasabah1.tarikUang();
				break;

			case 4:
				break;

			default:
				cout << "\n\t -----Warning! Masukkan Opsi yang Tersedia-----\n" << endl;

				break;
		}
		// }
		// else if (choice == 2)	
		// {
			
		// }else
		// {
		// 	cout << "\nEnter Valid Option";
		

	}	

	return 0;
}