#include <functional>
#include <iostream>

class Nec {
public:
    Nec(int val) : m_val{ val }{}
    void print_sum(int x) const
    {
        std::cout << m_val << " + " << x << " = " << m_val + x << '\n';
    }
private:
    int m_val;
};

void iprint(int i)
{
    std::cout << i << '\n';
}

int main()
{
    //std::function<void(int)> fprint = iprint;
    std::function fprint = iprint; //CTAD
    fprint(345);

    std::function<void()> fp1 = []() { iprint(333); };
    //std::function fp1 = []() { iprint(333); };
    fp1();

    std::function<void()> fp2 = std::bind(iprint, 985432);
    fp2();

    std::function<void(const Nec&, int)> fp3 = &Nec::print_sum;
    Nec mynec{ 9128 };
    fp3(mynec, 456);
}
