#include <functional>
#include <iostream>

class Myclass {
public:
    void foo(int x, int y)const
    {
        std::cout << x + y << '\n';
    }
};

int main()
{
    Myclass m;

    auto f = std::bind_front(&Myclass::foo, &m);

    f(10, 20);
}
