#include <iostream>
int main(void){
    int x, y;
    x = 5; y = -4;
    if (x >= 0 && y >= 0){
        std::cout << "KUADRAN I" << std::endl;
    }
    else if (x <= 0 && y >= 0){
        std::cout << "KUADRAN II" << std::endl;
    }
    else if (x <= 0 && y <= 0){
        std::cout << "KUADRAN III" << std::endl;
    }
    else if (x >= 0 && y <= 0){
        std::cout << "KUADRAN IV" << std::endl;
    }
}