#include <iostream>
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

double PersegiPanjang::Luas() {
    return panjang * lebar;
}

double PersegiPanjang::Keliling() {
    return 2 * (panjang + lebar);
}

PersegiPanjang::PersegiPanjang(double p, double l) {
    panjang = p;
    lebar = l;
}

void PersegiPanjang::setPanjang(double p) {
    panjang = p;
}

double PersegiPanjang::getPanjang() {
    return panjang;
}

void PersegiPanjang::setLebar(double l) {
    lebar = l;
}

double PersegiPanjang::getLebar() {
    return lebar;
}

void PersegiPanjang::cetakLuas() {
    std::cout << "Luas Persegi Panjang = " << PersegiPanjang::Luas() << std::endl;
}

void PersegiPanjang::cetakKeliling() {
    std::cout << "Keliling Persegi Panjang = " << PersegiPanjang::Keliling() << std::endl;
}

int main(void) {
    // membuat objek pertama dari kelas PersegiPanjang
    PersegiPanjang *obj_1 = new PersegiPanjang(10, 20);

    // membuat objek kedua dari kelas PersegiPanjang
    PersegiPanjang *obj_2 = new PersegiPanjang(30, 15);

    // memanggil fungsi dari objek pertama
    std::cout << "\nObjek pertama : " << std::endl;
    obj_1 -> cetakLuas();
    obj_1 -> cetakKeliling();

    // memanggil fungsi dari objek kedua
    std::cout << "\nObjek kedua : " << std::endl;
    obj_2 -> cetakLuas();
    obj_2 -> cetakKeliling();

    // menghapus objek
    delete obj_1;
    delete obj_2;
}