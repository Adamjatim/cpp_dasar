// 
#include <iostream>
using namespace std;

int main()
{
    int angka[]={10, 20, 30, 40, 50, 60, 70, 80, 90};
    int x;

    cout<<"Nilai yang ingin dicari : ";
    cin>>x;

    int ukuran = sizeof(angka)/sizeof(int);
    int bawah = 0;
    int atas = ukuran -1;

    while (bawah <= atas) {
        if(bawah == atas && angka[atas] != x) {
            cout<<"Nilai "<<x<<" tidak ada dalam array"<<endl;
            break;
        }

        int tengah = (bawah + atas) / 2;
        if(angka[tengah] == x) {
            cout<<"Nilai "<<x<<" ada pada array indeks ke-"<<tengah<<endl;
            break;
        }

        else if(angka[tengah] > x) {
            atas = tengah -1;
        }

        else {
            bawah = tengah +1;
        }
    }
    
    return 0;
}