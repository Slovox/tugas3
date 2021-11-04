#include <iostream>
#include <string>
using namespace std;



class Hewan {
private:
        string nama;
        int umur;

protected:
        void info() {
                cout << nama << umur << endl;
        }
};

class Kucing: public Hewan {
public:
        void suara() {
                cout << nama << " bersuara" << endl;
        }
};