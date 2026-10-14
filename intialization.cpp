#include <iostream>

int main(){

    // int width {5};       //define variable width and initialize it with 5   
    // std::cout << width;  //print the value 5
   int a;

   int b =3, c(4);    // copy initialization and direct initialization respectively
 std::cout << b << c; // traditional way of intialization 
   
 int d{5}, e{};          // modern initialization (direct list initialization) and value initialization(zero initialization) respectively
 std::cout << d << e;    // uniform initialization

 /*int f {6.2};          // disallowed narrowing conversion, will cause a compilation error
  int g = 4.4, h = (5.5); //not showing error because of implicit conversion, but the value will be truncated to 4 and 5 respectively with the warning message
  std::cout << f << g << h; */
 return 0;
}