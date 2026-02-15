#include <iostream>


int main() {
    int dash;
    std::cout << "number\n";
    std::cin >> dash;
    std::cout << "string\n";
    std::string x = "";
    std::cin >> x;
    int i;
    for (i = 0; i < dash; i++){
        std::cout << "-----------------------\n";
        std::cout << "||  " << x << "  ||  " << x << "  ||  "<< x << "  ||\n";
    } if (i == dash){
        std::cout << "-----------------------\n";
    }
    return 0;
}
