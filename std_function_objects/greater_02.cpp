#include <set>
#include <string>
#include <functional>
#include <iterator>
#include <algorithm>
#include <iostream>

int main()
{
	using namespace std;

	set<string, greater<string>> myset{ "ece", "naz", "ada", "eda", "nur", "gul", "efe",
	"sam", "can", "ege", "eva", "dan", "bob", "tan", "jim" };

	copy(myset.begin(), myset.end(), ostream_iterator<string>{cout, " "});
}
