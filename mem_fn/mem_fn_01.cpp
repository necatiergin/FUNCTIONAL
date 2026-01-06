#include <functional>
#include <iostream>

struct Nec {
    void print(int x) const 
    {
        std::cout << "Nec::print x = " << x << '\n';
    }
};

int main() 
{
    auto print_fn = std::mem_fn(&Nec::print);

    Nec mynec;
    Nec* pnec = &mynec;
    std::reference_wrapper<Nec> rnec = mynec;

    print_fn(mynec, 10);   // mynec.print(10)
    print_fn(pnec, 20);  // pnec->print(20)
    print_fn(rnec, 30);  // rnec.get().print(30)
}
