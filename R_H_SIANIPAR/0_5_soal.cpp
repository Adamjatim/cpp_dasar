// Programmer : Adam Rahmat Ilahi
// Thuesday, 3 November 2021
//
/*
soal : Buatlah suatu perogram c++ yang memiliki fungsi main() 
    dan memanggil suatu fungsi yang anda definisikan sendiri.
    Fungsi tersebut mengambil tahun cahaya sebagai argumen dan 
    menghasilkan nilai nilai balik berupa unit astronomi ekivalen. 
    Program harus meminta masukan tahun cahaya dari user dan 
    menghasilkan tampilan seperti dibawah ini :
    ~$ ./~
    Masukkan jumlah tahun cahaya: 4.2
    4.2 tahun cahaya ekivalen dengan 265608 unit astronomi.
    ~$ 
    Unit astronomi adalah jarak rata-rata matahari dari bumi 
    (sekitar 150.000.000 km atau 93.000.000 mil), dan setahun
    cahaya adalah jarak yang ditempuh cahaya dalam setahun 
    (sekitar 10 triliunkm atau 6 triliun mil). (jarak bintang 
    terdekat dari matahari adalah 4,2 tahun cahaya).
    Gunakan tipe data double dan gunakan formula konversi di 
    bawah ini.
    1 tahun cahaya = 63.240 unit astronomi.
*/

#include <iostream>
int kecepatan_cahaya(double tahun_cahaya){
    double unit_astronomi;
    unit_astronomi = tahun_cahaya * 63240;
    return unit_astronomi;
}
int main(void){
    double tahun_cahaya;
    std::cout << "Masukkan jumlah tahun cahaya: ";
    std::cin >> tahun_cahaya;
    std::cout << std::endl;
    std::cout << tahun_cahaya << " tahun cahaya ekivalen dengan " 
    << kecepatan_cahaya(tahun_cahaya) << " unit astronomi";
}
