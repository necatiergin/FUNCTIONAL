#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>

int main()
{
	using namespace std;

	int a[]{ 1, 5, 2, 3, 4, 7, 5, 9, 6, 8 };

	transform(begin(a), end(a), begin(a), negate{});
	copy(begin(a), end(a), ostream_iterator<int>{cout, " "});
}
