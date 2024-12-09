#include <ostream>
#include <functional>
#include <iostream>

std::ostream& print(std::ostream& os, int x, int y)
{
	return os << x << ' ' << y << ' ';
}

int main()
{
	using namespace std;
	using namespace placeholders;

	print(cout, 10, 20);
	auto f = bind(print, ref(cout), _1, _2);
	bind(print, ref(cout), _1, _2)(12, 45);
	f(10, 20);
}
