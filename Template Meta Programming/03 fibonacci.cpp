#include <iostream>

template <int N>
struct fib
{
    static const int value = fib<N-1>::value + fib<N-2>::value;
};

template <>
struct fib<2>
{
    static const int value = 1;
};

template <>
struct fib<1>
{
    static const int value = 1;
};

int main()
{
    std::cout<<fib<5>::value<<std::endl;
}
