#include <iostream>

using namespace std;

class Bitwise
{
	private:
		int x, y;

	public:
		Bitwise(): x(0), y(0){}
		Bitwise(int x, int y): x(x), y(y){}

		Bitwise operator & (const Bitwise &obj)
		{
			int x = this->x & obj.x;
			int y = this->y & obj.y;

			return Bitwise(x, y);
		}
		Bitwise operator | (const Bitwise &obj)
		{
			int x = this->x | obj.x;
			int y = this->y | obj.y;

			return Bitwise(x, y);
		}

		void printValues()
		{
			cout << "x : " << x << "\ty :" << y << endl;
		}
};

int main()
{
	Bitwise bits1(20,10), bits2(5,8), bits3, bits4;
	bits3 = bits1 & bits2;
	bits3.printValues();
	bits4 = bits1 | bits2;
	bits4.printValues();

	return 0;
}