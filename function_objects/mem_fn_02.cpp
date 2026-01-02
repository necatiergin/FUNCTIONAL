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
	Myclass m;
	auto ptr = new Myclass;
	auto f1 = std::mem_fn(&Myclass::func);
	f1(m);
	f1(ptr);
	auto f2 = std::mem_fn(&Myclass::foo);
	f2(m, 20);
	f2(ptr, 30);
}
