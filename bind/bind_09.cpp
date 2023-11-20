#include <functional>
#include <iostream>

void foo(int x, int y)
{
	std::cout << "x = " << x << " y = " << y << '\n';
}

int main()
{
	int a = 6, b = 13;

	auto fn = std::bind(foo, a, b);
	//auto fn = std::bind(foo, std::ref(a), std::ref(b));

	a = 49, b = 78;

	fn();
}
