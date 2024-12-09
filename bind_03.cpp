#include <iostream>
#include <functional>

struct Functor {
	void operator()(int a, int b)const
	{
		std::cout << a << ' ' << b << '\n';
	}
};

int main()
{
	using namespace std::placeholders;

	auto f = std::bind(Functor{}, _1, 999);

	f(23);
}
