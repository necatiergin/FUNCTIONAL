#include <utility>
#include <iostream>

using namespace std;

int main()
{
	int a = 23, b = 56;

	//auto p = make_pair(a, b);
	auto p = make_pair(ref(a), ref(b));
	++p.first, ++p.second;
	std::cout << "a = " << a << "\n";
	std::cout << "b = " << b << "\n";
}
