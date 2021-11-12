// Programmer : Adam Rahmat Ilahi
// Monday, 2 November 2021
//
/*
soal: Buatlah suatu program c++ yang meminta 
    masukan jumlah kilometer dari papan ketik 
    dan mengonversinya menjadi meter.
*/
#include <iostream>
int main(void) {
    int var_1, convert;
    std::cout << "Input jarak kilometer yang akan di convert : ";
    std::cin >> var_1; // input var_1
    std::cout << "Nilai variabel var_1 : " << var_1 << " kilometer" << std::endl;

    // proses convert kilometer ke meter
    // kilometer -> meter == kilometer * 1000
    convert = var_1 * 1000;
    std::cout << var_1 << " kilometer, sama dengan : " 
    << convert << " meter\n" << std::endl;
}