//generalized call back

#include <functional>
#include <iostream>

class Functor {
	int mx;
public:
	Functor(int x) : mx{ x } {}
	int operator()(int val)const { return val * mx; }
};

class Myclass {
public:
	static int foo(int x) { return x * x * x; }
};

using fcallback = std::function<int(int)>;

void func(int x, fcallback fnc)
{
	std::cout << "func called\n";
	fnc(x);
	std::cout << "------------------\n";
}

int foo(int x)
{
	std::cout << "foo(int x) called x = " << x << '\n';
	return x * x;
}

int main()
{
	func(10, foo);
	func(10, [](int a) {std::cout << "lambda\n"; return a * 2; });
	func(20, Functor{ 5 });
	func(20, &Myclass::foo);
}
