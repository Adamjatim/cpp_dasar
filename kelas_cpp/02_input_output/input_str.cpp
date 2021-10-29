#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    char nama_1[11], nama_2[11];
    cout << "String var ke-1 : "; cin >> nama_1;
    cout << "\nString var ke-2 : "; fflush(stdin);
    cin.get(nama_2,11);
    cout << endl << endl;
    cout << "String var ke-1 : " << nama_1;
    cout << "\nString var ke-2 : " << nama_2;
    return 0;
}
