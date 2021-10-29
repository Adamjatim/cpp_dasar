#include <iostream>

using namespace std;

int hasil;

int tambah(int a, int b) {
    hasil = a + b;
    cout << hasil;
    return hasil;
}

void kurang(int a, int b) {
    hasil = a - b;
    cout << hasil; 
} 

int kali(int a, int b);
void bagi(int a, int b);

int main()
{
    
    cout << endl;
    return 0;
}

int kali(int a, int b) {
    hasil = a * b;
    cout << hasil; 
    return hasil;
}

void bagi(int a, int b) {
    hasil = a / b;
    cout << hasil;
}