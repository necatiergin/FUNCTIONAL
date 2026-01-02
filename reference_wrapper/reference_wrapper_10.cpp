//reference_wrapper can be bound to a function

#include <functional>
#include <iostream>

int foo(int x)
{
	return x * x;
}

int bar(int x)
{
	return -x * x * x;
}

int main()
{
	std::reference_wrapper f = foo;
	std::cout << f(5) << '\n';
	f = bar;
	std::cout << f(5) << '\n';
}
