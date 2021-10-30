#include <iostream>
int main(void) {
    int input, panjang_persegi, lebar_persegi, luas_persegi;
    while (true)
    {
        std::cout << "Program Penghitung luas" << std::endl;
        std::cout << "1. luas persegi panjang" << std::endl;
        std::cout << "2. Luas lingkaran" << std::endl;
        std::cout << "3. Luas Segitiga" << std::endl;
        std::cout << "input luas yang ingin di hitung : ";
        std::cin >> input; 
        if (input == 1){
            std::cout << "input panjang : ";
            std::cin >> panjang_persegi;
            std::cout << "input lebar : ";
            std::cin >> lebar_persegi;
            std::cout << "luas persegi panjang";
            luas_persegi = panjang_persegi * lebar_persegi;
        }
        else if (input == 2){
            std::cout << "input jari-jari : ";
        }
        
     }
    
}