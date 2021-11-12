#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    a = 10;
    b = 12;

    if ( a > b ) {
        cout << "a lebih besar dari b";
    }

    else if (a < b ) {
        cout << "a lebih kecil dari b";
    }

    else {
        cout << endl;
    }
    cout << endl << endl;
    return 0;
}