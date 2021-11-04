#include<iostream>

using namespace std;

class angka
{
  public:
    float nilai1,nilai2;
    
    void nilai()
      {
        cout << "Masukkan Angka Pertama : ";  
        cin >> nilai1;
        cout << "Masukkan Angka Kedua : ";  
        cin >> nilai2;
      }

};
  
class hitung : public angka
  {
    public:
  
    float hasil;
    
    void kalkulasi (int pilihan)
    {
   
      switch (pilihan)  
      {
        case 1:
          hasil = nilai1 + nilai2;
        break;
        
        case 2:
          hasil = nilai1 - nilai2;
        break;
                        
        case 3:
          hasil = nilai1 * nilai2;
        break;
        
        case 4:
          hasil = nilai1 / nilai2;
        break;
        
        default:
          cout << "Pilihan Anda Tidak Tersedia";
      }
    }
 
  void tampil()
    {
      cout << "Hasilnya Adalah : " << hasil;  
    }  
};


int main()
{
  int pilih;

      hitung htg;
      htg.nilai();

      cout << "Ketik" << endl;
      cout << "1 untuk tambah" << endl; 
      cout << "2 untuk kurang" << endl; 
      cout << "3 untuk kali" << endl; 
      cout << "4 untuk bagi" << endl;;
      cout << "\nBerikan Pilihan : ";
      cin >> pilih;
  
      htg.kalkulasi(pilih);
      htg.tampil();
 }