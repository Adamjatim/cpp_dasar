#include <iostream>
int main(void) {
    int input = 5;
    for (int i = 1; i < input; i++){
        for (int j = 1; j < i; j++){
            for (int k = 5; k > j; k--){
                std::cout << " ";
            }
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    input = 1;
    for (int i = 5; i >= input; i--){
        for (int j = 1; j <= i; j++){
            for (int k = 1; k < j; k++){
                std::cout << " ";
            }
            std::cout << "*";
        }
        std::cout << std::endl;   
    }
}