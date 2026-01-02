#include <list>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>

int main()
{
	using namespace std;

	list<string> slist{ "hasan", "demir", "nur", "kaya", "berk" };
	vector<reference_wrapper<string>> vec{ slist.begin(), slist.end() };
	shuffle(vec.begin(), vec.end(), mt19937{ random_device{}() });
	copy(vec.begin(), vec.end(), ostream_iterator<string>{cout, " "});

	cout << '\n';

	for (auto& s : slist) {
		s += "can";
	}

	copy(vec.begin(), vec.end(), ostream_iterator<string>{cout, " "});
	
}
