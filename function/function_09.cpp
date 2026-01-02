#include <functional>
#include <iostream>

class Myclass {
public:
	int foo(int)
	{
		std::cout << "Myclass::foo(int)\n";
		return 1;
	}

	int bar(int)const
	{
		std::cout << "Myclass::bar(int)const\n";
		return 1;
	}
};


int main()
{
	using namespace std;

	Myclass m;

	function<int(Myclass&, int)> f1 = &Myclass::foo;
	f1(m, 10);
	function<int(const Myclass&, int)> f2 = &Myclass::bar;
	f2(m, 20);
	function<int(Myclass*, int)> f3 = &Myclass::foo;
	f3(&m, 30);
	function<int(const Myclass*, int)> f4 = &Myclass::bar;
	f4(&m, 40);
}


