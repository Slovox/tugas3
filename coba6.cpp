#include <iostream>
#include <string.h>

using namespace std;

class Mahasiswa{
  private:
  char nama[30];
  float ip;
  public:
  Mahasiswa();
  Mahasiswa(char [], float);
  ~Mahasiswa(){}

  void showNama();
  void showIp();
  char *getNama();
  float getIp();
};

Mahasiswa::Mahasiswa(){
  strcpy(nama, "Ideal");
  ip = 3.0;
}

Mahasiswa::Mahasiswa(char *nama, float ip){
  strcpy(this->nama, nama);
  this->ip = ip;
}

// void Mahasiswa::showNama(){
//   cout << nama;
// }

// void Mahasiswa::showIp(){
//   cout << ip;
// }

char *Mahasiswa::getNama(){
  return nama;
}

float Mahasiswa::getIp(){
  return ip;
}

int main(){
  Mahasiswa m1, m2((char *)"Ucok", 3.2);
  if (m2.getIp() < m1.getIp())
    cout <<"IP "<< m2.getNama() << " di bawah ideal..." << endl;
  else
    cout << "IP " << m2.getNama() << " ideal..." << endl;
  return 0;
}