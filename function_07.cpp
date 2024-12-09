#include <functional>
#include <vector>

using fn_type = std::function<int(int)>;

class Nec {
	//...
private:
	fn_type mf; //std::function as a non-static data member
};

void f(fn_type); //std::function as function parameter

int main()
{
	std::vector<fn_type> vec; //std::function as container element
	//...
}
