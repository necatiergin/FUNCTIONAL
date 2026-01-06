#include <functional>
#include <iostream>

struct Nec {
	void print(int x)const
	{
		std::cout << x << '\n';
	}
};


int main()
{
	using namespace std;

	auto fptr = &Nec::print;

	auto f = mem_fn(fptr);

	Nec mynec;
	f(mynec, 10);
}
