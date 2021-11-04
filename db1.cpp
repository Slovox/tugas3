#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

class Akun
{
	public:
		
		string pin = "123456";
		int saldo;
		int count = 0;

		void read()
		{
			fstream fin;

			fin.open("akun.csv",ios::in);

			vector<string> row;

			string line, word, temp;

			while(getline(fin, line))
			{
				row.clear();

				istringstream s(line);

				while (getline(s, word, ','))
				{
					row.push_back(word);
				}

				if (row[0] == pin)
				{
					count = 1;

					cout << "Nama Anda " << row[2] << "\n";
					cout << "Saldo Anda Rp." << row[1] << "\n";
				}
			}

		if(count == 0)
			cout << "Data tidak ditemukan\n";

		fin.close();
		}

};

int main()
{
	Akun Akn;

	Akn.read();

	return 0;
}