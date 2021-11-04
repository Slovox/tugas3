#include <iostream>

using namespace std;

// kelas induk
class Hewan {
public:
	string nama;
	int hp;
	float speed;

public:
	void info() {
		cout << nama << endl;
		cout << "HP: " << hp << endl;
		cout << "Speed: " << speed << endl;
	}
};

// kelas anak
class Kucing: public Hewan {
public:
	void mengeong() {
		cout << nama << " mengatakan \"Meeoongg.... Meeoongg....\"" << endl;
	}
};

int main() {
	
	// inisiasi objek
	Kucing kcg;

	// inisiasi hewan
	kcg.nama = "Cocoon";
	kcg.hp = 100;
	kcg.speed = 10;

	// memanggil method pada class Kucing
	cout << "Method info() yang didefinisikan dari kelas induk:" << endl;
	kcg.info();

	cout << "\nMethod mengeong() yang didefinisikan dari kelas anak:" << endl;
	kcg.mengeong();

	return 0;
}