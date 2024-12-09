//reference_wrapper template argument may be an incomplete type

#include <functional>

class A;

void foo(std::reference_wrapper<A> x);
