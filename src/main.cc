#include <iostream>

void getNum(){
    int array[] = {};
    for (int i = 0; i < 10; i++){
        std::cout << "Please enter number " << i << "\n";
        std::cin >> array[i];
    }
}


int main() {
    getNum();
    return 0;
}
