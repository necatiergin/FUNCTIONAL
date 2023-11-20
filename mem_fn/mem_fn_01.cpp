#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <functional>


int main()
{
	using namespace std;

	vector<string> svec{ "Baran", "Cahit", "Figen", "Turhan", "Mahir", "Haldun", "Galip", "Agah", "Hande", "Sevda",
	"Su", "Cem", "Kaya", "Tevfik", "Muhsin", "Taner", "Fikret", "Sezai", "Yusuf", "Huseyin", };

	transform(svec.begin(), svec.end(), ostream_iterator<size_t>{cout, " "}, mem_fn(&string::size));
}
