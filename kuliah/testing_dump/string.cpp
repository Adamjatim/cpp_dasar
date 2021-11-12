#include <iostream>
#include <string>
int main(void) {
    std::string halo = "halo";
    std::cout << halo << std::endl;
    std::cout << sizeof(halo) << std::endl;
    std::cout << sizeof(std::string) << std::endl;
}