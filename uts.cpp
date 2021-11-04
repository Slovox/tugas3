#include <iostream>
#include <string>

using namespace std;

class Useridentity
{
	private:
		string username;
		string password;

	public:
		bool login(string username, string password);

		void logout();

};

class ProfilMahasiswa : public Useridentity
{
	private:
		void resetProfil(string);

	protected:
		char NIM[9];
		string nama;
	
	public:
		bool simpanProfil();

		void getProfil(string username, string nama, string NIM, int ID);

};