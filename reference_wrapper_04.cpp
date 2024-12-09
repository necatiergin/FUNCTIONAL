//CTAD for reference_wrapper 

#include <functional>
#include <iostream>

int main()
{
	std::string s{ "neco" };

	std::reference_wrapper r = s;
	std::cout << r.get() << '\n';
}
