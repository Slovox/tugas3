#include <iostream>

using namespace std;

class Lingkaran{

public:

	
	int hitungVolume (int jari2){
		int x;

		x = 4/3*3.14*jari2*jari2*jari2;

		return x;
	}

	float hitungVolume (float jari2){
		float x;

		x = 4/3*3.14*jari2*jari2*jari2;

		return x;
	}

};

int main() {

	Lingkaran ling;

	cout << "Volume Lingkaran:" << ling.hitungVolume((float)66.66) << endl;

	cout << "Volume Lingkaran:" << ling.hitungVolume(66) << endl;
	
	return 0;
}