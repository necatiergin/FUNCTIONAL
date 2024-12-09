#include <iostream>
#include <functional>

int main()
{
	using namespace std::placeholders;

	auto fsum = [](int a, int b, int c) {return a + b + c; };
	auto fb = std::bind(fsum, _1, _2, 0);

	std::cout << fb(23, 37) << '\n';
}
