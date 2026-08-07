#include <functional>
#include <iostream>

void foo(int x, int y, int z)
{
    std::cout << x << ' ' << y << ' ' << z << '\n';
}

int main()
{
    auto f = std::bind_front(foo, 10, 20);   //C++20

    f(30);   // foo(10, 20, 30)
    f(40);   // foo(10, 20, 40)
}
