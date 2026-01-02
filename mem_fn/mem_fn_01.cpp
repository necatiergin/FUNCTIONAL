#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
#include <iterator>
#include <functional>

int main()
{
	std::vector<std::string> svec{ "Baran", "Cahit", "Figen", "Turhan", "Mahir", 
	"Haldun", "Galip", "Agah", "Hande", "Sevda",
	"Su", "Cem", "Kaya", "Tevfik", "Muhsin", "Taner", 
	"Fikret", "Sezai", "Yusuf", "Huseyin", };

	transform(svec.begin(), svec.end(), std::ostream_iterator<size_t>{std::cout, " "}, mem_fn(&string::size));
}
