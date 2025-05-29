#include <ostream>
#include <functional>
#include <iostream>

std::ostream& myprint(std::ostream& os, int x, int y)
{
	return os << x << ' ' << y << '\n';
}

int main()
{
	using namespace std::placeholders;

	myprint(std::cout, 10, 20);
	auto f = bind(myprint, ref(std::cout), _1, _2);
	bind(myprint, ref(std::cout), _1, _2)(12, 45);
	f(10, 20);
}
