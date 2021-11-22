// Programmer : Adam Rahmat Ilahi
// Tuesday, 16 November 2021
//
// soal :    Buatlah suatu perogram yang meminta masukan jumlah detik (int) dan 
//      ditugaskan kepada suatu variabel long Kemudian tampilkanlah waktu 
//      ekivalennya dalam hari, jam, menit dan detik. Gunakan konstanta simbolik 
//      untuk mempresentasikan jumlah dalam sehari, jumlah menit dalam sejam, 
//      dan jumlah detik dalam semenit.
//
#include <iostream>
int main(void){
    long int detik_input, hari, jam, menit, detik;
    std::cout << "Silahkan menginputkan jumlah detik : "; std::cin >> detik_input;
    hari = detik_input / 86400;
    jam = (detik_input % 86400) / 3600;
    menit = ((detik_input % 86400) % 3600) / 60;
    detik = ((detik_input % 86400) % 3600) % 60;
    std::cout << "Hari  : " << hari << std::endl;
    std::cout << "Jam   : " << jam << std::endl;
    std::cout << "Menit : " << menit << std::endl;
    std::cout << "Detik : " << detik << std::endl;
}