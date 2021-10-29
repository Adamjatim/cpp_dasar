#include <iostream>

class pegawai {
// private: 
/* 
    Basically all of thing in class is "private" 
    but this is how to explicit class is "private".
*/

// protected:
/*
    this is too.
*/
public:
/*
    but this is different
s*/
    char Name[50];
    char Perusahaan[50];
    int Usia;
};

void main() {
    pegawai pegawai_1;
    pegawai_1.Name = "Adam";
    pegawai_1.Perusahaan = "ADAM LOKET";
    pegawai_1.Usia = 18;
/* 
    ini sama seperti anda mendeklarasikan :
    char Nama[50];
    char Perusahaan[50];
    int usia;
    pada fungsi int main() {...};
*/
}