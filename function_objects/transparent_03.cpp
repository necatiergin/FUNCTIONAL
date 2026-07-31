#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <iostream>

int main()
{
	std::vector<std::string> svec{ "ali", "ergi", "emin", "can", "adil" };
	std::vector cvec{ 'm', 'n', 'e', 'o', 'e' };

	transform(svec.begin(), svec.end(), cvec.begin(), svec.begin(), std::plus{});

	for (const auto& s : svec)
		std::cout << s << ' ';
}
