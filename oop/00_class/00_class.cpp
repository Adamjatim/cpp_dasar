#include <iostream>

class PersegiPanjang {
private:
    double panjang;
    double lebar;

    double Luas() {
        return panjang * lebar;
    }

    double Keliling() {
        return 2 * (panjang + lebar);
    }

public:
    PersegiPanjang(double p, double l) {
        panjang = p;
        lebar = l;
    }

    void setPanjang(double p) {
        panjang = p;
    }

    double getPanjang() {
        return panjang;
    }

    void setLebar(double l) {
        lebar = l;
    }

    double getLebar() {
        return lebar;
    }

    void cetakLuas() {
        std::cout << "Luas Persegi Panjang = " << Luas() << std::endl;
    }
};