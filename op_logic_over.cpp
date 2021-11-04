#include <iostream>

using namespace std;

class Logical
{
	private:
		int x, y;

	public:
		Logical(){}
		Logical(int x, int y) : x(x), y(y){}

		bool operator && (const Logical &obj)
		{
			return (x == obj.x && y == obj.y);
		}

		bool operator || (const Logical &obj)
		{
			return (x == obj.x || y == obj.y);
		}
};

int main()
{
	Logical logic1(1,1), logic2(1,1);
	Logical logic3(2,3), logic4(4,5);

	cout << ((logic1 && logic2) ? "True" : "False") << endl;
	cout << ((logic3 || logic4) ? "True" : "False") << endl;

	return 0;
}