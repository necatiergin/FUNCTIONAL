#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>

struct Counter 
{
    void increment() 
    {
        ++mval; 
    }
    
    void print() const 
    {
        std::cout << mval << '\n'; 
    }

    int mval{ 0 };
};

int main() 
{
    std::vector<Counter> vec(10);

    std::for_each(vec.begin(), vec.end(), std::mem_fn(&Counter::increment));
    std::for_each(vec.begin(), vec.end(), std::mem_fn(&Counter::print));
}
