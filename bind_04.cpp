#include <iostream>
#include <functional>

class Myclass {
public:
	void func()const
	{
		std::cout << "Myclass::func()\n";
	}

	void foo(int a)const
	{
		std::cout << "Myclass::foo(int a) a = " << a << '\n';
	}
};

int main()
{
	using namespace std::placeholders;

	Myclass mx;

	auto f1 = std::bind(&Myclass::func, _1);
	f1(mx);

	auto f2 = bind(&Myclass::foo, _1, _2);

	f2(mx, 55);
}
