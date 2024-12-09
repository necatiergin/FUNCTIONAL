#include <vector>
#include <algorithm>
#include <iterator>

struct BiggiePred
{
	//...
	bool operator()(int i) const
	{
		//code
		return true;
	}
	//very big data
	char buf[4096]{};
};

const BiggiePred gbig;

std::vector<int> ivec;

int main()
{
	std::vector<int> destvec;
	std::copy_if(ivec.begin(), ivec.end(), back_inserter(destvec), std::ref(gbig));
}
