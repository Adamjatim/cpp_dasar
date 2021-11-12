// Programmer : Adam Rahmat Ilahi
// Monday, 2 November 2021
//
/*
    soal : Buatlah suatu program c++ yang menampilkan nama dan alamat anda
*/
#include <iostream>
int main(void) {
    char nama[51] = "adam rahmat ilahi",
    alamat[51] = "surabaya, nyamplungan gang 9 nomer 51";

    std::cout << "Nama\t: " 
    << nama << std::endl;
    
    std::cout << "Alamat\t: " 
    << alamat << std::endl;
}