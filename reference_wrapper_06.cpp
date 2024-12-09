#include <utility>
#include <iostream>

int main()
{
	std::string s1{ "ali" }, s2{ "veli" };

	auto p1 = std::make_pair(s1, s2);
	p1.first += "han";
	p1.second += "can";
	std::cout << s1 << ' ' << s2 << '\n';

	auto p2 = std::make_pair(ref(s1), ref(s2));
	p2.first += "han";
	p2.second += "can";
	std::cout << s1 << ' ' << s2 << '\n';
}
