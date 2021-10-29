#include <cstdlib>
#include <iostream>

int main() 
{
    // type data
    int var_1;
    char var_2[6] = "hallo";
    
    var_1 = 10;

    std::cout << var_2[0];
    std::cout << var_2[1];

    // kondisi
    if ( 1 < 2) {
        std::cout << "1 lebih kecil dari 2";
    }
    for (int a = 0; a < 5; a++) {
        std::cout << a << std::endl;
    }

    return 0;
}