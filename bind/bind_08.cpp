#include <functional>
#include <iostream>


void increment(int& i)
{
    i++;
}

int main() 
{
    int ival{ 3 };
    auto fn1 = std::bind(increment, ival);

    std::cout << ival << '\n'; 
    fn1();
    std::cout << ival << '\n'; 
    auto fn2 = std::bind(increment, std::ref(ival));
    fn2();
    std::cout << ival << '\n'; 
}
