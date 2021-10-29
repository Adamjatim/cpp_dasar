#include <iostream>

class PersegiPanjang {
private:
    double panjang;
    double lebar;
    double Luas();
    double Keliling();
public:
    PersegiPanjang(double p, double l);
    void setPanjang(double p);
    double getPanjang();
    void setLebar(double l);
    double getLebar();
    void cetakLuas();
    void cetakKeliling();
};

// umumnya

PersegiPanjang::PersegiPanjang(double p, double l) {
    panjang = p;
    lebar = l;
}

// pointer this

PersegiPanjang::PersegiPanjang(double p, double l) {
    this -> panjang = p;
    this -> lebar = l;
}

// bisa juga dengan catatan kelasnya juga harus sama

/*
class PersegiPanjang {
private:
    double p;
    double l;
    double Luas();
    double Keliling();
public:
    PersegiPanjang(double panjang, double lebar);
    void setPanjang(double panjang);
    double getPanjang();
    void setLebar(double lebar);
    double getLebar();
    void cetakLuas();
    void cetakKeliling();
};

PersegiPanjang::PersegiPanjang(double panjang, double lebar) {
    this -> p = panjang;
    this -> l = lebar;
}
*/