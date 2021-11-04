#include <iostream>

using namespace std;

class Point
{
	public:
	
		int x,y;
		
		Point(int a, int b)
		{
			x = a;
			y = b;
		}
		
		int getX() { return x; }
		int getY() { return y; }
};

int main()
{
	Point p(5,10);
	cout << "NIlai x: " << p.getX() << '\n';
	cout << "Nilai y: " << p.getY() << '\n';
	
	return 0;
}