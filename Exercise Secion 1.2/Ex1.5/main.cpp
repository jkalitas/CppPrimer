#include <stdio.h>
#include <iostream>

void print_int_value(int value) {
  std::cout << value;
}

void print_product(int value1, int value2) {
  std::cout << value1 * value2;
}
int main() {
  int v1 = 0, v2 = 0;
  
  std::cout << "Enter two numbers:" << std::endl;
  std::cin >> v1 >> v2;
  std::cout << "The sum of ";
  print_int_value(v1);
  std::cout << " and ";
  print_int_value(v2);
  std::cout << " is ";
  print_product(v1, v2);
  std::cout << std::endl;
  return 0;
}
