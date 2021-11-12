// Programmer : Adam Rahmat Ilahi
// Monday, 8 November 2021
//
/*
soal : Buatlah suatu perogram pendek yang menanyakan tinggi badan anda dalam 
    satuan sentimeter dan ubahlah tinggi badan anda dalam satuan meter dan 
    sentimeter. Gunakan karakter garis bawah (underscore) untuk mengindikasi 
    tempat mengentri masukan. juga, gunakan suatu konstanta simbolik const
    untuk mempresentasikan faktor konversi
*/

#include <iostream>
int main(){
    int _h_badan;
    #define m_cm = 100;
    std::cout << "berapa tinggi badan anda dalam satuan cm : ";
    std::cin >> _h_badan;
    std::cout << std::endl;
    std::cout << "tinggi badan anda dalam satuan cm : " << _h_badan << std::endl;
    std::cout << "tinggi badan anda dalam satuan m  : " << _h_badan / m_cm

}