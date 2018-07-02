#include <iostream>

int main (){

  int countdown = 10;
  while (countdown >= 0)
    std::cout << countdown-- << std::endl;

  return 0;
}
