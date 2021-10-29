// program ini dapat mencari nilai dalam suatu array
#include <iostream>
using namespace std;

int main()
{
    int angka[] = {10, 20, 30 ,40, 50, 60, 70, 80, 90};
    int x;
    // sizeof(int) on a 32-bit machine, will return value 4 byte
    // sizeof(int*) on a 64-bit machine, will return value 8 byte
    int ukuran = sizeof(angka)/sizeof(int);
    // ukuran value is 36 byte / 4 byte
    // will getting 9 index array

    cout<<"Nilai yang ingin dicari : ";
    cin>>x; // x adalah nilai yang akan dicari dalam array

    int a;

    for (int a = 0; a < ukuran; a++) {
        if(x == angka[a]) {
            cout<<"Nilai "<<x<<" ada di dalam array index ke-["<<a<<"]"<<endl;
            break;
        }
        
        else if (a == ukuran) {
            cout<<"Nilai "<<x<<" tidak ada di dalam array"<<endl;
        }   
    }
    
    return 0;
}