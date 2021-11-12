#include <iostream>
#include <cstdlib>
#include <string.h>

int opsi; // global variabel

class manipulasi_array
{
private:
    /* data */
public:
    manipulasi_array(/* args */);
    ~manipulasi_array();
};

manipulasi_array::manipulasi_array(/* args */)
{
}

manipulasi_array::~manipulasi_array()
{
}

int main() 
{    
    while (true) // looping
    {
        // menu
        std::cout << "###########################################\n";
        std::cout << "#        PROGRAM MANIPULASI ARRAY         #\n";
        std::cout << "# 1. menambahkan array                    #\n";
        std::cout << "# 2. mengganti array pada baris tertentu  #\n";
        std::cout << "# 3. menghapus array pada baris tertentu  #\n";
        std::cout << "###########################################\n";
        std::cout << "PILIH OPSI 1 - 4 : ";
        std::cin >> opsi;
        system("clear");
        // opsi (1)
        if (opsi == 1){ 
            std::cout << "#######################################\n";
            std::cout << "# 1. Integer / Bilangan bulat         #\n";
            std::cout << "# 2. Float / Bilangan koma            #\n";
            std::cout << "# 3. charcter / karakter              #\n";
            std::cout << "#######################################\n";
            std::cout << "Tipe Array yang ingin di inputkan : ";
            std::cin >> opsi;
            std::cout << opsi;
            system("clear");
            // opsi (1.1)
            if (opsi == 1){
                std::cout << "input panjang array : ";
            }
            // opsi (1.2)
            else if (opsi == 2)
            {
                
            }
            // opsi (1.3)
            else if (opsi == 3){
                
            }
        }
        // opsi (2)
        else if (opsi == 2){ 
            
        }
        // opsi (3)
        else if (opsi == 3){
            
        } 
    }
    return 0;
}