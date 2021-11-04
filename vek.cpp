#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vek;

	for (int i = 1; i <= 5; i++)
		vek.push_back(i);

	cout << "Hasil fungsi begin() dan end() : ";
	for (auto i = vek.begin(); i != vek.end(); ++i)
		cout << *i << " ";

	cout << "\nHasil fungsi cbegin() dan cend() : ";
	for (auto i = vek.cbegin(); i != vek.cend(); ++i)
		cout << *i << " ";

	cout << "\nHasil fungsi rbegin() dan rend() : ";
	for (auto ir = vek.rbegin(); ir != vek.rend(); ++ir)
		cout << *ir << " ";

	cout << "\nHasil fungsi crbegin() dan crend() : ";
	for (auto ir = vek.crbegin(); ir != vek.crend(); ++ir)
		cout << *ir << " ";

	return 0;
}