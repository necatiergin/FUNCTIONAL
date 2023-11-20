// a call with an empty function object throws std::bad_function_call

#include <functional>
#include <iostream>

int main()
{
	std::function<int(int)> fnc;

	try {
		auto x = fnc(13);
	}
	//catch (const std::exception& ex) {
	catch (const std::bad_function_call& ex) {
		std::cout << "exception caught : " << ex.what() << "\n";
		std::cout << typeid(ex).name() << "\n";
	}
}
