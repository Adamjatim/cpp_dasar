#include <iostream>

class PersegiPanjang {
public:
    // membuat variabel statis
    static int counter;

    PersegiPanjang(double p, double l);
    ~PersegiPanjang();
    void setPanjang(double p);
    double getPanjang();
    void setLebar(double l);
    double getLebar();
    void cetakLuas();
    void cetakKeliling();
private:
    double panjang;
    double lebar;
    double hitungLuas();
    double hitungKeliling();
};

// mengisi nilai awal unutuk variabel statis
int PersegiPanjang::counter = 0;

PersegiPanjang::PersegiPanjang(double p, double l) {
    // menaikkan nilai variabel statis
    counter++;

    panjang = p;
    lebar = l;
}

PersegiPanjang::~PersegiPanjang() {
    // menurunkan nilai variabel statis
    counter--;
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
    std::cout << "Luas Persegi Panjang : " << hitungLuas() << std::endl;
}

void PersegiPanjang::cetakKeliling() {
    std::cout << "Keliling Persegi Panjang : " << hitungKeliling() << std::endl;
}

double PersegiPanjang::hitungLuas() {
    return panjang * lebar;
}

double PersegiPanjang::hitungKeliling() {
    return 2 * (panjang + lebar);
}

int main(void) {
    // membuat objek pertama dari kelas PersegiPanjang
    PersegiPanjang *obj_1 = new PersegiPanjang(10, 20);

    std::cout << "Nilai counter : " << PersegiPanjang::counter << std::endl;

    // membuat objek kedua dari kelas PersegiPanjang
    PersegiPanjang *obj_2 = new PersegiPanjang(20, 30);

    std::cout << "Nilai counter : " << PersegiPanjang::counter << std::endl;

    //menghapus daftar objek
    delete obj_1;
    delete obj_2;

    std::cout << "Nilai counter : " << PersegiPanjang::counter << std::endl;
}

/*
    pada kode diatas, counter merupakan variabel statis, 
    Nilai dari variabel tersebut mula mula diinisialisasi dengahn nilai 0 (line 24).

    nilai tersebut akan bertambah satu setiap kali ada proses pembuatan objek dari 
    kelas PersegiPanjang dan akan berkurang satu setiap kali ada penghapusan objek.
*/