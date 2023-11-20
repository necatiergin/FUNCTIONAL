#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>

int main()
{
	using namespace std;

	int a[]{ 1, 5, 2, 3, 4, 7, 5, 9, 6, 8 };
	int b[]{ 3, 7, 8, 2, 6, 4, 1, 0, 3, 9 };
	int c[size(a)];

	transform(begin(a), end(a), begin(b), begin(c), plus{});
	//transform(begin(a), end(a), begin(b), begin(c), [](int a, int b) {return a + b; });
	copy(begin(c), end(c), ostream_iterator<int>{cout, " "});
}
