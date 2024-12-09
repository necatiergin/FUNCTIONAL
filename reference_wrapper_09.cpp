//reference_wrapper tamamlanmamış türler (incomplete types) ile kullanılabilir

#include <functional>

class A;

void foo(std::reference_wrapper<A> x);
