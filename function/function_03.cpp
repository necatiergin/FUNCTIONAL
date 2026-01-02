//member function operator bool 

#include <functional>
#include <iostream>

int foo(int x)
{
	std::cout << "foo called!\n";
	return x * x + 5;
}

int main()
{
	std::function<int(int)> fnc;

	if (fnc) {
		std::cout << "has a function\n";
		auto x = fnc(20);
		std::cout << "x = " << x << '\n';
	}
	else {
		std::cout << "empty\n";
	}

	fnc = foo;

	if (fnc) {
		std::cout << "has a function\n";
		auto x = fnc(20);
		std::cout << "x = " << x << '\n';
	}
	else {
		std::cout << "empty\n";
	}
}
