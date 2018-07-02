#include <iostream>

int main () {

  int int1 = 0, int2 = 0;
  std::cout << "Define first value" << std::endl;
  std::cin >> int1;
  std::cout << "Define second value" << std::endl;
  std::cin >> int2;

  //If statement to ensure order
  if(int1 < int2){
    while (int1 <= int2)
      std::cout << int1++ << std::endl;
  }else{
    while (int2 <= int1)
      std::cout << int2++ << std::endl;
  }

  return 0;
}
