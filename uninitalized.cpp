#include <iostream>
// // void donothing(int&)
// {
// }

    int main()
{

    int x;  // int and x are white space separated tokens, but x is uninitialized

    // donothing(x);

    std::cout << x << '\n'; // compiler warning: 'x' is used uninitialized in this function [-Wuninitialized]

    return 0;
}