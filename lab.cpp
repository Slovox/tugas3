#include <iostream>

using namespace std;

class bangun_datar
{
	public:
		float angka1, angka2, hasil;

		void mulai()
		{
			cout << "Masukkan Nilai Sisi / Alas / Diagonal Pertama : ";  
	        cin >> angka1;
	        cout << "Masukkan Nilai Sisi / Tinggi / Diagonal Kedua : ";  
	        cin >> angka2;
			
		}



};

class hitung : public bangun_datar
{
	public:
		void kalkulasi(int pilihan)
		{
			switch (pilihan)  
	      	{
		        case 1:
		          	hasil = angka1 * angka2;
		        break;
		        
		        case 2:
		          	hasil = angka1 * angka2 / 2;
		        break;
		                        
		        case 3:
		          	hasil = angka1 * angka2 / 2;
		        break;
		        
		        default:
		          cout << "Pilihan Anda Tidak Tersedia";
	      	}
		}
		void tampil()
		{
			cout << "\nHasilnya adalah\t\t\t\t\t : " << hasil<< endl; 
		}
};

int main()
{
	int pilih;

	bangun_datar bgndtr;
	hitung htg;

	while(pilih != 4) 
	{

			cout << "\t\t Mencari Luas Bangun Datar \t\t" << endl;
			cout << "1. Persegi" << endl;
			cout << "2. Segitiga" << endl;
			cout << "3. Layang-Layang\n" << endl;
			cout << "4. Keluar" << endl;
			cout << "Masukkan Pilihan Anda: " ;
			cin >> pilih;
				
		switch(pilih)
		{
			case 1:
				htg.mulai();
				htg.kalkulasi(pilih);
				htg.tampil(); 
				break;

			case 2:
				htg.mulai();
				htg.kalkulasi(pilih);
				htg.tampil(); 
				break;

			case 3:
				htg.mulai();
				htg.kalkulasi(pilih);
				htg.tampil(); 
				break;	

			case 4:
				break;

			default:
				cout << "\n\t -----Masukkan Opsi yang Tersedia-----\n" << endl;

				break;
		}
		
	}	

	return 0;
}