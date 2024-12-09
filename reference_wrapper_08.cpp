// reference_wrapper can not bind to r value expression

#include <functional>
#include <string>

int foo();

int main()
{
	//std::reference_wrapper<int> r3 = foo(); //invalid
	//std::reference_wrapper r2 = "ali"s; //invalid
	//std::reference_wrapper<const std::string> r3 = "ali"s; //invalid
	//std::reference_wrapper<const std::string> r4 = std::string{ "necati" }; //invalid
}
