#include <cstdlib>
#include <iostream>

using namespace std;

int hasil; // variabel global

void penjumlahan()//fungsi
{
  hasil = 10;
  cout << "variabel dari fungsi : "<<hasil << endl;
}

int main()
{
  penjumlahan();
  hasil = 11;
  cout << "variabel dari fungsi utama : " << hasil ;
  return 0;
}