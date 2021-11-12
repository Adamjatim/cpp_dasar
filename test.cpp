// Programmer : Adam Rahmat Ilahi
// Jum at, 5 November 2021
//
#include <iostream>
#include <string.h>
int main(void){
    char _str1[] = "BONJURE";
    char _str2[] = "bonjure";

    // strcmp()
    std::cout << "Hasil strcmp() :" << std::endl << std::endl;
    if (strcmp(_str1, _str2) == 0){
        std::cout << _str1 << " sama dengan " << _str2 << std::endl << std::endl;
    }
    else if (strcmp(_str1, _str2) == 1){
        std::cout << _str1 << " lebih besar dibanding " << _str2 << std::endl << std::endl;
    }
    else{
        std::cout << _str1 << " lebih kecil dibanding " << _str2 << std::endl << std::endl;
    }

    // strncmp()
    char _str3[] = "abcd";
    char _str4[] = "ABCD";
    std::cout << "Hasil strncmp : "<<std::endl << std::endl;
    if (strncmp(_str3, _str4, 4) == 0){
        std::cout << _str3 << " Sama dengan " << _str4 << std::endl << std::endl;
    }
    else if (strncmp(_str3, _str4, 7) == 1){
        std::cout << _str3 << " lebih besar dibanding " << _str4 << std::endl << std::endl;
    }
    else{
        std::cout << _str3 << " lebih kecil dibanding " << _str4 << std::endl << std::endl;
    }  

strcmp(_str1, _str2);
strncmp(_str3, _str4, 4);

}
