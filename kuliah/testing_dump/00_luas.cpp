#include <iostream>
int main(void) {
    int input, panjang, lebar, luas, r, tinggi, alas, i = 0;
    float phi = 3.14;
    while (i < 1)
    {
        std::cout << "Program Penghitung luas" << std::endl;
        std::cout << "1. luas persegi panjang" << std::endl;
        std::cout << "2. Luas lingkaran" << std::endl;
        std::cout << "3. Luas Segitiga" << std::endl;
        std::cout << "4. Keluar" << std::endl;
        std::cout << "input luas yang ingin di hitung : ";
        std::cin >> input;
        std::cout << std::endl;

        if (input == 1){
            std::cout << "input panjang : ";
            std::cin >> panjang;
            std::cout << "input lebar : ";
            std::cin >> lebar;
            luas = panjang * lebar;
            std::cout << "luas persegi panjang : " << luas;
            std::cout << std::endl << std::endl;
        }

        else if (input == 2){
            std::cout << "input jari-jari : ";
            std::cin >> r;
            luas = r * r * phi;
            std::cout << "luas lingkaran : " << luas;
            std::cout << std::endl << std::endl;
        }
        
        else if (input == 3) {
            std::cout << "input tinggi : ";
            std::cin >> tinggi;
            std::cout << "input alas : ";
            std::cin >> alas;
            luas = 0.5 * tinggi * alas;
            std::cout << "luas segitiga : " << luas;
            std::cout << std::endl << std::endl;
        }

        else if (input == 4) {
            std::cout << "Terima kasih..." << std::endl;
            break;
        }

        else {
            std::cout << "input harus berupa angka 1 - 4\n" << std::endl;
        }
     }
    
}