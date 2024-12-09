#include <set>
#include <string>
#include <functional>
#include <iterator>
#include <algorithm>
#include <iostream>

int main()
{
	using gset = std::set<std::string, std::greater<std::string>>;

	gset myset{ "ece", "naz", "ada", "eda", "nur", "gul", "efe",
	"sam", "can", "ege", "eva", "dan", "bob", "tan", "jim" };

	copy(myset.begin(), myset.end(), ostream_iterator<std::string>{std::cout, " "});
}
