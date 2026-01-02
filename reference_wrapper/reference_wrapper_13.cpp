#include <functional>
#include <iostream>

std::reference_wrapper<int> foo() 
{
    int x = 10;
    return std::ref(x); // causes ub
}

int main()
{
    int& r = foo();

    std::cout << "r = " << r << '\n';
}
