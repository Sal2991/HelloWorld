#include <iostream>


int main() {
    int i;
    int row;
    int column;
    std::string y = "";
    std::cout << "text\n";
    std::cin >> y;
    std::cout << "amount of columns\n";
    std::cin >> row;
    std::cout << "amount of rows\n";
    std::cin >> column;
    std::string x = "[ " + y + " ] ";
    for(int k = 0; k < column; k++){
        for(i = 0; i < row; i++){
            std::cout << std::string(x.length() * row - 1, '-') + '\n';
            for (int j = 0; j < row; j++){
                std::cout << x;
            }
            std::cout << "\n";
        }
    }
    std::cout << std::string(x.length() * row - 1, '-') + '\n';
    return 0;
}
