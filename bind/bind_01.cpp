#include <functional>
#include <iostream>

void func(int x, int y, int z)
{
	std::cout << "x = " << x << " y = " << y << " z = " << z << '\n';
	std::cout << "----------------------------------\n";
}

int main()
{
	using namespace std::placeholders;

	std::bind(func, 10, 20, 30)();
	
	auto f1 = std::bind(func, 10, 20, 30);
	
	f1();
	
	auto f2 = std::bind(func, 1, 2, _1);
	
	f2(99);
	
	auto f3 = std::bind(func, _1, _2, 333);
	
	f3(20, 40);
	
	auto f4 = std::bind(func, _1, _1, _1);
	
	f4(10);
}
