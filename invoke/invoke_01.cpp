#include <iostream>
#include <functional>

class Functor {
public:
	int operator()(int x)const
	{
		return x * 4;
	}
};

void func(int a, int b)
{
	std::cout << "func called  x = " << a << " y = " << b << '\n';
}

class Myclass {
public:
	void foo(int x, int y)
	{
		std::cout << "Myclass::foo(int x, int y) x = " << x << " y = " << y << '\n';
	}
};

int main()
{
	std::invoke(func, 34, 56);
	Myclass m;
	std::invoke(&Myclass::foo, m, 10, 20);
	auto a = std::invoke(Functor{}, 10);
	std::cout << "a = " << a << '\n';
	void (Myclass:: * pftr)(int, int) = &Myclass::foo;
	std::invoke(pftr, m, 7, 9);
}
