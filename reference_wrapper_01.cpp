#include <functional>
#include <iostream>

int main(void)
{
	using namespace std;
	int x = 3;
	int y = 7;

	//reference_wrapper<int> r = x; //ctad
	reference_wrapper r = x; //ctad
	++r;
	r = y;
	++r;

	cout << x << y;
}
