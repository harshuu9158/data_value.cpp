#include <iostream>

int main() {
  [[maybe_unused]] double pi (3.14);       
  [[maybe_unused]] double gravity {9.8};    // [[maybe_unused]] attribute is used to indicate that the variable may not be used in the code, preventing compiler warnings about unused variables.

  std::cout << "The value of pi is: " << pi; 
    return 0;
}