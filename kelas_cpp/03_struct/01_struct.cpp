#include <cstdlib>
#include <iostream>

using namespace std;

typedef struct 
{
    long int nis ;
    char nama[31] ;
    char alamat[51] ;
}data_siswa;

data_siswa siswa1,siswa2;

int main()
{
    //input
    cout << "Data siswa ke - 1" << endl ;
    cout << "-----------------\n" ;
    cout << "NIS     : " ; cin >> siswa1.nis;
    cout << "Nama    : " ; fflush(stdin);
    cin.get(siswa1.nama,30);
    cout << "Alamat  : " ; fflush(stdin);
    cin.get(siswa1.alamat,50);
    cout << endl << endl;
    cout << "Data siswa ke - 2" << endl ;
    cout << "-----------------\n" ;
    cout << "NIS     : " ; cin >> siswa2.nis;
    cout << "Nama    : " ; fflush(stdin);
    cin.get(siswa2.nama,30);
    cout << "Alamat  : " ; fflush(stdin);
    cin.get(siswa2.alamat,50);
    cout << endl << endl;

    //output
    cout << "Data Siswa ke - 1\n";
    cout << "------------------\n";
    cout << "NIP    : " << siswa1.nis << endl;
    cout << "Nama   : " << siswa1.nama << endl;
    cout << "Alamat : " << siswa1.alamat << endl;
    cout << endl << endl;
    cout << "Data Siswa ke - 2\n";
    cout << "------------------\n";
    cout << "NIP    : " << siswa2.nis << endl;
    cout << "Nama   : " << siswa2.nama << endl;
    cout << "Alamat : " << siswa2.alamat << endl;
    cout << endl << endl;
    return 0;
}