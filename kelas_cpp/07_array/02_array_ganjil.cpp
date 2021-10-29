// program ini dapat mengidentifikasi input suatu array
// pengidentifikasi bisa berupa array genap / array ganjil
#include <iostream>

using namespace std;

int main(void) 
{
    int angka[2][4];
    int array;

    for(int a = 0; a < 2; a++ ) {
        for(int b = 0; b < 4; b++ ) {
            cin >> angka[a][b];
        }
    }

    cout << endl;

    for(int a = 0; a < 2; a++ ) {
        for(int b = 0; b < 4; b++ ) {
            // errornya
            if( ( angka[a][b] % 2 ) == 0 ) { 
                cout << "array Genap";
            }
            else {
                cout << "array Ganjil";
            }
            cout << endl;
        }
    }
}