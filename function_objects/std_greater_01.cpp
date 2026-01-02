#include <algorithm>
#include <functional>
#include <iterator>
#include <iostream>

int main()
{
	using namespace std;

	int a[]{ 1, 5, 2, 3, 4, 7, 5, 9, 6, 8 };

	//sort(begin(a), end(a), greater<int>{});
	//sort(begin(a), end(a), greater<>{});
	sort(begin(a), end(a), greater{});
	//sort(rbegin(a), rend(a));
	
	//sort(begin(a), end(a), [](int a, int b) {return a > b; });
	copy(begin(a), end(a), ostream_iterator<int>{cout, " "});
}
