#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

int main()
{
	using namespace std;
	using namespace placeholders;

	vector<int> ivec(1000);
	generate(ivec.begin(), ivec.end(), [] {return rand() % 1000; });
	int ival;

	cout << "hangi degerden buyuk olanlar sayilsin: ";
	cin >> ival;

	cout << count_if(ivec.begin(), ivec.end(), [ival](int x) {return x > ival; }) << '\n';
	cout << count_if(ivec.begin(), ivec.end(), bind(greater<int>{}, _1, ival)) << '\n';
	cout << count_if(ivec.begin(), ivec.end(), bind(greater{}, _1, ival)); //transparent
}
