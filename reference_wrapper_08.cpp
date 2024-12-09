// reference_wrapper R value ifadesine bağlanamaz

#include <functional>
#include <string>

int foo();

int main()
{
	using namespace std;
	
	reference_wrapper<int> r3 = foo(); //gecersiz
	reference_wrapper r2 = "ali"s; //gecersiz
	reference_wrapper<const string> r3 = "ali"s; //gecersiz
	reference_wrapper<const string> r4 = string{"necati"}; //gecersiz
}
