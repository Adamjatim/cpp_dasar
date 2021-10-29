#include <iostream>
#include <cstdlib>

using namespace std;

void digital_root(int n) {
  int digits = n.toString().split("").map(n);
  int sum = 0;
  for (int i = 0; i < digits.length; i++) {
    sum += digits[i];
  }
  var sumString = sum.toString();
  if (sumString.length > 1) {
    var sumDigits = sumString.split("").map(Number);
    var firstSumDigit = sumDigits.slice(0);
    var lastSumDigit = sumDigits.slice(-1);
    return firstSumDigit[0] + lastSumDigit[0];
  } else {
      return sum;
  }
}

int main()
{
    int nil_digiroot;
    cout << "inputkan nilai digital root : ";
    cin >> nil_digiroot;
    digital_root(nil_digiroot);
    return 0;
}