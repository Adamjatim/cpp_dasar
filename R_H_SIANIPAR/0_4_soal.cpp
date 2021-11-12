// Programmer : Adam Rahmat Ilahi
// Monday, 2 November 2021
//
/*
soal: Buatlah suatu perogram c++ yang memiliki fungsi main() dan 
    memanggil suatu fungsi yang anda definisikan sendiri. Fungsi 
    tersebut mengambil nilai derajat Celcius sebagai argumen 
    dan menghasilkan nilai balik berupa nilai Fahrenheit ekivalen. 
    program harus meminta masukan nilai Celcius dari user dan 
    menghasilkan tampilan seperti dibawah ini:
    ~$ ./~
    Masukan nilai derajat Celcius: 20
    20 derajat Celcius ekivalen dengan 68 derajat Fahrenheit.
    ~$ 
    sebagai referensi, berikut adalah formula untuk melakukan 
    konversi tersebut:
    Fahrenheit = 1.8 * Celcius + 32
*/

#include <iostream>

int F_ekivalen(int Celcius) {
    int Fahrenheit;
    Fahrenheit = 1.8 * Celcius + 32;
    return Fahrenheit;
}

int main(void) {
    int Celcius;
    std::cout << "Masukkan nilai derajat Celcius : ";
    std::cin >> Celcius;
    std::cout << std::endl << Celcius << " derajat Celcius ekivalen     " 
    << "dengan " << F_ekivalen(Celcius) << " derajat Fahrenheit.";
    std::cout << std::endl;
}