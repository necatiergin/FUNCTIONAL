#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>

int main()
{
	using namespace std;

	int a[]{ 6, 8, 2, 3, 4, 7, 5, 9, 6, 8 };
	int b[]{ 4, 3, 1, 2, 3, 2, 2, 2, 2, 3 };
	int c[size(a)];

	transform(begin(a), end(a), begin(b), begin(c), multiplies{});
	//transform(begin(a), end(a), begin(b), begin(c), divides{});
	//transform(begin(a), end(a), begin(b), begin(c), modulus{});
	
	copy(begin(c), end(c), ostream_iterator<int>{cout, " "});
}
