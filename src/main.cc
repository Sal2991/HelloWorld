#include <iostream>
#include <print>

int main() {
    int x = 0;
    int y = 0;
    std::println("Hello!");
    std::cout << "World!" << std::endl;
    while (true) {
        x = x + 1;
        std::cout << x << std::endl;
        y = x;
        if (y == 50) {
            std::cout << "y is 50" << std::endl;
            break;
        }
    }
    return 0;
}
