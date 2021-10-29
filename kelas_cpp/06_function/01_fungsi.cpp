#include <cstdlib>
#include <iostream>

using namespace std;

int hasil; //variabel_global

void fungsi_kurang(int var_1, int var_2);
int fungsi_bagi(int var_1, int var_2);

void fungsi_tambah(int var_1, int var_2) 
{
	hasil = var_1 + var_2;
  	cout << hasil;
}

int fungsi_kali(int var_1, int var_2)
{
    hasil = var_1 * var_2;
    cout << hasil;
    return hasil;
}

int main()
{
	  cout << "fungsi 10 + 20 bernilai : ";fungsi_tambah(10, 20);
    cout << endl;
  	cout << "fungsi 50 - 30 bernilai : ";fungsi_kurang(50, 30);
    cout << endl;
    cout << "fungsi 10 * 10 bernilai : ";fungsi_kali(10, 10);
    cout << endl;
    cout << "fungsi 10 / 5 bernilai : ";fungsi_bagi(10, 5);
    cout << endl;
  	return 0;
}

void fungsi_kurang(int var_1, int var_2)
{
	hasil = var_1 - var_2;
  	cout << hasil;
}

int fungsi_bagi(int var_1, int var_2)
{
    hasil = var_1 / var_2;
    cout << hasil;
    return hasil;
}