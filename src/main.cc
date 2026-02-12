#include <iostream>
#include <print>
// cd build/
// then save, then cmake —build .
// then .\main.exe

int main() {
  std::println("Hello!");
  std::cout << "Type a number: ";
  int x;
  std::cin >> x;
  std::cout << "Your number is: " << x << std::endl;
  system("pause");
  if (x > 0) {
    std::cout << "Your number is positive." << std::endl;
  } else if (x < 0) {
    std::cout << "Your number is negative." << std::endl;
  } else {
    std::cout << "Your number is zero." << std::endl;
  }
  if (x % 2 == 0) {
    std::cout << "Your number is even." << std::endl;
  } else {
    std::cout << "Your number is odd." << std::endl;
  }
  return 0;
}
