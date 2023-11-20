#include <iostream>
#include <functional>

using namespace std;

class Functor {
public:
	int operator()(int x)const
	{
		return x * 4;
	}
};

void func(int a, int b)
{
	std::cout << "func cagrildi x = " << a << " y = " << b << '\n';
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
	invoke(func, 34, 56);
	Myclass m;
	invoke(&Myclass::foo, m, 10, 20);
	auto a = invoke(Functor{}, 10);
	std::cout << "a = " << a << '\n';
	void (Myclass:: * pftr)(int, int) = &Myclass::foo;
	invoke(pftr, m, 7, 9);

}
