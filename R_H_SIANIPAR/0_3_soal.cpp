// Programmer : Adam Rahmat Ilahi
// Monday, 2 November 2021
//
/*
soal: Buatlah suaatu perogram c++ yang menggunakan 
    2 fungsi yang didefinisikan sendiri oleh pengguna 
    (user defined function) dan menghasilkaan keluaran 
    berikut :
    ~$ ./~
    Anak medan pemberani
    Anak medan pemberani
    Bali tujuan wisata internasional
    Bali tujuan wisata internasional
    ~$ 
    Fungsi pertama  dipanggil atau diaktivasi dua kali 
    dan menghasilkan dua baris pertama dari keluaran di atas. 
    Fungsi kedua juga dipanggil dua kali dan menghasilkan 
    keluaran dua baris terakhir.
*/

#include <iostream>

// fungsi ke - 1
int medan(void) { 
    std::cout << "Anak medan pemberani" << std::endl;
}

//fungsi ke -2
int bali(void) {
    std::cout << "Bali tujuan wisata internasional" << std::endl;
}

int main(void) {
    medan();
    medan();
    bali();
    bali();
}