//bir reference_wrapper nesnesini bir fonksiyona bağlayabiliriz

#include <functional>
#include <iostream>


int foo(int x)
{
	return x * x;
}

int bar(int x)
{
	return -x * x * x;
}

int main()
{
	using namespace std;

	reference_wrapper f = foo;
	cout << f(5) << '\n';
	f = bar;
	cout << f(5) << '\n';
}
