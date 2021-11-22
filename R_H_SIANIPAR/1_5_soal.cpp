// Programmer : Adam Rahmat Ilahi
// Tuesday, 16 November 2021
//
// soal :    Buatlah suatu program yang menanyakan kepada anda tentang jumlah 
//      jarak (km) yang telah anda tempuh seumur hidup anda menggunakan mobil 
//      atau motor buat juga program tersebut menanyakan jumlah liter yang 
//      anda habiskan untuk memnempuh jaralk tersebut setelah itu buat keluaran 
//      program untuk melaporkan jumlah KM / liter
//
#include <iostream>
int main(void){
    int jumlah_jarak, jumlah_bbm, banding;
    std::cout << "Input jumlah total jarak (km) : "; std::cin >> jumlah_jarak;
    std::cout << "Input jumlah liter BBM yang anda habiskan : "; std::cin >> jumlah_bbm;
    
    // proses
    banding = jumlah_jarak / jumlah_bbm;
    std::cout << banding;
}