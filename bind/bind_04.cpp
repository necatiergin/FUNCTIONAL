#include <iostream>
#include <functional>

class Myclass {
public:
	void foo()const
	{
		std::cout << "Myclass::foo()\n";
	}

	void bar(int a)const
	{
		std::cout << "Myclass::bar(int a) a = " << a << '\n';
	}
};

int main()
{
	using namespace std::placeholders;

	Myclass mx;

	auto f1 = std::bind(&Myclass::foo, _1);
	f1(mx);

	auto f2 = bind(&Myclass::bar, _1, _2);

	f2(mx, 55);
}
