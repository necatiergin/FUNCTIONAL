#include <functional>
#include <iostream>

void foo(int& r)
{
	r *= 10;
}
int main()
{
	int x{3};
	std::reference_wrapper rw{ x };

	int& r = rw;
	++r;

	foo(rw);

	std::cout << "x = " << x << '\n';
}
