#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

class Nec {
public:
	Nec(int x = 0) : mx{ x } {}
	void print()const
	{
		std::cout << mx << ' ';
	}
private:
	int mx;
};


int main()
{
	std::vector nvec = { Nec{1}, Nec{7}, Nec{3}, Nec{6}, Nec{2}, Nec{8} };

	for_each(nvec.begin(), nvec.end(), mem_fn(&Nec::print));
	std::cout << '\n';
	for_each(nvec.begin(), nvec.end(), [](const Nec& nec) {nec.print(); });
	cout << '\n';
}
