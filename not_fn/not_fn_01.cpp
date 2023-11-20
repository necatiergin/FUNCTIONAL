#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>

bool isprime(int x)
{
	if (x < 2) return false;

	if (x % 2 == 0)	return x == 2;

	if (x % 3 == 0)	return x == 3;

	if (x % 5 == 0)	return x == 5;

	for (int i = 7; i * i <= x; i += 2)
		if (x % i == 0) return false;

	return true;
}

int main()
{
	using namespace std;

	srand(static_cast<unsigned>(time(nullptr)));
	vector<int> ivec(100);
	generate(begin(ivec), end(ivec), [] {return rand() % 1000; });
	copy_if(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, " "}, isprime);
	cout << "\n\n";

	copy_if(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, " "},
		[](int x) {return !isprime(x); });
	cout << "\n\n";

	copy_if(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, " "}, not_fn(isprime));
}
