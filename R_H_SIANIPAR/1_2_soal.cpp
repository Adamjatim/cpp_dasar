// Programmer : Adam Rahmat Ilahi
// Wednesday, 4 November 2021
//
/*
soal : Jika anda memiliki dua pecahan, a/b dan c/d,
    penjumlahan mereka dapat ditempuh dengan formula:
    a/b + c/d = a*d+b*c / b*d
    Buatlah suatu program yang mengerti dua pecahan tersebut,
    dan menampilkan hasil penjumlahannya dalam format pecahan
    (bukan desimal).
*/

#include <iostream>
int main(void){
    int a, b, c, d;
    a = 5;
    b = 10;
    c = 20;
    d = 5;
    std::cout << ((a*d) + (b*c)) / (b*d);
    std::cout << std::endl << std::endl;
}