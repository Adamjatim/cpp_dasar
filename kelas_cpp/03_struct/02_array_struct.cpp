#include <cstdlib>
#include <iostream>

#define maks 100 //maksimal array

using namespace std;

typedef struct 
{
    long int nis;
    char nama[31];
    char alamat[51];
}data_siswa;

data_siswa siswa[maks]; // array of struct

int main()
{
    int a, b;
    cout << "Berapa Data Siswa? "; cin >> b;
    cout << endl;
    for (a=0; a<b; a++) {
        cout << "Data siswa ke - " << a+1 << endl;
        cout << "---------------------" << endl;
        cout << "NIS    : "; cin >> siswa[a].nis;
        cout << "Nama   : "; fflush(stdin);
        cin.get(siswa[a].nama,30);
        cout << "Alamat : "; fflush(stdin);
        cin.get(siswa[a].alamat,50);
        cout << endl << endl;
    }

    for (a=0; a<b; a++) {
        cout << "Data siswa ke - " << a+1 << endl;
        cout << "---------------------" << endl;
        cout << "NIS    = " << siswa[a].nis << endl;
        cout << "Nama   = " << siswa[a].nama << endl;
        cout << "Alamat = " << siswa[a].alamat << endl;
        cout << endl << endl;
    }
    
    return 0;
}