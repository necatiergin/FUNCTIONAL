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
	int a = 35;
	int b = 45;
	int c = 55;

	auto f1 = std::bind(func, a, b, c);
	f1();
	std::cout << "a = " << a << " b = " << b << " c = " << c << '\n';

	using std::ref;

	auto f2 = bind(func, ref(a), ref(b), ref(c));
	f2();
	std::cout << "a = " << a << " b = " << b << " c = " << c << '\n';
}
