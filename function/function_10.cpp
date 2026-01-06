#include <functional>
#include <iostream>

struct Data {
	int x{}, y{ 0 };
};


int main()
{
	auto fm = &Data::x;

	Data mydata;

	std::function<int& (Data&)> f(fm);

	f(mydata) = 7;

	std::cout << mydata.x << '\n';
}

