#include <iostream>
#include <functional>

void func(int& x, int& y, int& z)
{
	x++;
	y++;
	z++;
}

int main()
{
	using namespace std;

	int a = 35;
	int b = 45;
	int c = 55;

	auto f1 = bind(func, a, b, c);
	f1();
	cout << "a = " << a << " b = " << b << " c = " << c << '\n';

	auto f2 = bind(func, ref(a), ref(b), ref(c));
	f2();
	cout << "a = " << a << " b = " << b << " c = " << c << '\n';
}
