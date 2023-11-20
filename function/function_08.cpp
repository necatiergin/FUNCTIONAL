#include <functional>
#include <iostream>

int foo(int) { return 1; }

int main()
{
	using namespace std;

	function<int(int)> f;

	cout.setf(ios::boolalpha);
	
	cout << (f == nullptr) << "\n";
	if (f)
		cout << "not empty\n";
	else
		cout << "empty\n";


	f = foo;
	cout << (f == nullptr) << "\n";

	if (f)
		cout << "not empty\n";
	else
		cout << "empty\n";
}
