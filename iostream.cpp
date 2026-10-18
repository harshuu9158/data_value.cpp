#include <iostream>

int main(){

    std::cout << "Enter two numbers: ";

    int x{};
    int y{};
    std::cin >> x; // Read an integer from standard input
    std::cin >> y; // >> extraction operator
    // if you Enter 3 5 in first line, then x will be 3 and y will be 5, not x = 3 5;
    std::cout << "You entered: " << x << " and " << y << '\n';

    return 0;
}    