#include <iostream>
#include <print>

int main() {
    int x = 0;
    int y = 0;
    std::println("Hello!");
    std::cout << "World!" << std::endl;
    while (true) {
        x++;
        std::cout << x << std::endl;
        y = x;
        if (y % 2 == 0) {
            std::cout << "y is even" << std::endl;
        }
        if (y == 500) {
            std::cout << "y is 500" << std::endl;
            break;
        }
    }
    return 0;
}
