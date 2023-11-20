#include <functional>
#include <iostream>
#include <vector>

using fnc = std::function<int(int)>;

using namespace std;

class Functor {
	int mx;
public:
	Functor(int x) : mx{ x } {}
	int operator()(int val)const 
	{ 
		std::cout << "int Functor::operator()(int)\n";
		return val * mx; 
	}
};

class Myclass {
public:
	static int foo(int x) 
	{
		std::cout << "int Myclass::foo(int)\n";
		return x * x * x;
	}
};



int gf(int x)
{
	std::cout << "gf(int x) cagrildi\n";
	return x * x;
}

int main()
{
	//vector<function<int(int)>> fcvec;
	vector<fnc> fcvec;

	fcvec.emplace_back([](int x) 
		{cout << "lambda\n";  return x * x; });
	fcvec.emplace_back(&Myclass::foo);
	fcvec.emplace_back(gf);
	fcvec.emplace_back(Functor{ 15 });
	//

	for (auto& f : fcvec)
		cout << f(10) << "\n";

}
