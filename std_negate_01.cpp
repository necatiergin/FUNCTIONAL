#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
#include <iostream>

int main()
{
	std::vector vec{ 1, 5, 2, 3, 4, 7, 5, 9, 6, 8 };

	transform(begin(vec), end(vec), begin(vec), std::negate{});
	copy(begin(vec), end(vec), std::ostream_iterator<int>{std::cout, " "});
}
