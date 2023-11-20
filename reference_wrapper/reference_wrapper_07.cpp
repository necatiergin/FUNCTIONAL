#include <iostream>
#include <functional>
#include <vector>

int main()
{
	int x{}, y{}, z{};
	
	//array elements can not be references.
	//int& a[10] = { x, y, z };  //invalid


	//array elements can be reference_wrapper objects.
	std::reference_wrapper<int> a[] = { x, y, z };

	
	//vector elements can not be references.
	// std::vector<int&> vec{ x, y, z }; //invalid
		
	//vector elements can be reference_wrapper objects.
	std::vector<std::reference_wrapper<int>> vec{ x, y, z };
}
