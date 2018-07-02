#include <iostream>

int main (){

  int from = 50, sum = 0;
  while (from <= 100){
    sum += from;
    from++;
  }
  std::cout << "Sum = " << sum << std::endl;
  return 0;
}
