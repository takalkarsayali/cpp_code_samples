#include <iostream>
using namespace std;
class shape
{
public:
	virtual void area() = 0;
};
class square : public shape
{
	int a;

public:
	square(int x)
	{
		a = x;
	}
	void area()
	{
		cout << "The area of square is: " << a * a << endl;
	}
};
class rectangle : public shape
{
	int l, b;

public:
	rectangle(int j, int k)
	{
		l = j;
		b = k;
	}
	void area()
	{
		cout << "The area of rectangle is: " << l * b << endl;
	}
};

class triangle : public shape
{
	int h, bl;

public:
	triangle()
	{
		cout << "Enter height and base length of triangle: " << endl;
		cin >> h >> bl;
	}
	void area()
	{
		cout << "The area of triangle is: " << (h * bl) / 2 << endl;
	}
};

class circle : public shape
{
	int v;
	char choice;

public:
	circle()
	{
		cout << "Enter the radius of circle: " << endl;
		cin >> v;
	}
	void area()
	{
		cout << "The area of circle is: "
			 << 3.14 * (v * v) << endl;
	}
};

int main()
{
	shape *ptr;
	int a, l, b;
	cout << "Calculating area of different shapes: \n";
	cout << "Enter length of square: " << endl;
	cin >> a;
	square obj1(a);
	ptr = &obj1;
	ptr->area();
	cout << "Enter length and breadth of rectangle: " << endl;
	cin >> l >> b;
	rectangle obj2(l, b);
	ptr = &obj2;
	ptr->area();

	triangle obj3;
	ptr = &obj3;
	ptr->area();

	circle obj4;
	ptr = &obj4;
	ptr->area();
	return 0;
}