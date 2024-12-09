#include <functional>
#include <iostream>

int main(void)
{
	int x = 3;
	int y = 7;

	//reference_wrapper<int> r = x; 
	std::reference_wrapper r = x; //ctad
	++r;
	r = y;
	++r;

	std::cout << x << y;
}
