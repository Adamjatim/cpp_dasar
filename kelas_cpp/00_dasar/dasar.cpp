#include <cstdlib>
#include <iostream>

// using namespace std;

int main()
{
  // tipe_data
  int a = 20, b = 20; 
  // char a = 'A', b = 'B'; 
  if(a < b) {
    std::cout<<"Nilai a lebih kecil dari b";
  }
  else if(a > b) {
    std::cout<<"Nilai a lebih besar dari b";
  }
  else
  {
    std::cout<<"Nilai a sama dengan b"<< std::endl;
  }
  // x++ == x = x + 1
  for ( int x = 0; x < 5; x++) {
    std::cout << x << std::endl;
  }
  
  return 0;
}