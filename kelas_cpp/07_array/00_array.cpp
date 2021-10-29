// program ini menjelaskan nilai dari setiap indeks
// yang ada pada array angka[][]

#include <iostream>

using namespace std;

int main(void) 
{
    // array 1 dimensi
    int angka1[3] = {1, 2, 3};
    cout<<angka1[0]<<endl;

    // array 2 dimensi
    int angka2[2][4];

    for(int a = 0; a < 2; a++ ) {
        for(int b = 0; b < 4; b++ ) {
            cin >> angka2[a][b];
        }
    }

    cout << endl;

    for(int a = 0; a < 2; a++ ) {
        for(int b = 0; b < 4; b++ ) {
            cout << "indeks ke- " << a << "," << b << " = " << angka2[a][b];
            cout << endl;
        }
    }
    
    // array 3 dimensi

    int angka3[2][2][3] = {10,20,30,40,50,60, 70,80,90,100,110,120};

    cout << endl;

    for(int a = 0; a < 2; a++ ) {
        for(int b = 0; b < 2; b++ ) {
            for(int c = 0; c < 3; c++ ) {
                cout << "indeks ke- " << a << "," << b << "," << c << " = " << angka3[a][b][c];
                cout << endl; 
            }
        }
    }

}