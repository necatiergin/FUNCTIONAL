#include <iostream>

template<typename T>
void func(T x)
{
	x += 20;
}

int main()
{
	int a = 10;

	int& aref = a;
	func(aref);
	std::cout << a << "\n";

	func<int&>(a);
	std::cout << a << "\n";

	func(std::ref(a));
	std::cout << a << "\n";
}
