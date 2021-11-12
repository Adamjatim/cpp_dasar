// Programmer : Adam Rahmat Ilahi
// Thuesday, 3 November 2021
//
/*
soal : Buatlah suatu perogram c++ yang meminta user untuk memasukkan
    jumlah jam dan menit. Fungsi main() harus melewatkan kedua nilai
    tersebut ke suatu fungsi bertipe void untuk ditampilkan. Berikut
    tampilan yang akan didapatkan:
    ~$ ./~
    Masukkan jumlah jam: 9
    Masukkan jumlah menit: 28
    Waktu 9:28
    ~$
*/

#include <iostream>

void _time(){
    int _jam, _menit;
    std::cout << "Masukkan jumlah jam: ";
    std::cin >> _jam;
    std::cout << "Masukkan jumlah menit: ";
    std::cin >> _menit;
    std::cout << "Waktu " << _jam << ":" << _menit;
    std::cout << std::endl << std::endl;
}

int main(void){
    _time();
}
