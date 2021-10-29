// program ini menjelaskan array bertipe data char

#include <iostream>

using namespace std;

int main(void) 
{
    char string[2][4];

    for(int a = 0; a < 2; a++ ) {
        for(int b = 0; b < 4; b++ ) {
            cin >> string[a][b];
        }
    }

    cout << endl;

    for(int a = 0; a < 2; a++ ) {
        for(int b = 0; b < 4; b++ ) {
            cout << "indeks ke- " << a << "," << b << " = " << string[a][b];
            cout << endl;
        }
    }
}