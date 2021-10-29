// Program ini menjelaskan perbedaan string dan array char

#include <iostream>
using namespace std;

int main()
{
    double bobot[] = {5.4, 6.35, 12.6 };
    char nama[] = {'S', 'U', 'R', 'A', 'B', 'A', 'Y', 'A'};
    char ch[] = "Surabaya";
    
    cout<<"Ukuran dari array nama : "<<sizeof(nama)<<endl;
    cout<<"Ukuran dari ch : "<<sizeof(ch)<<endl;

    for (int a = 0; a <= 7; a++) {
        cout<<nama[a];
    }
    cout<<"\n";

    for ( int b = 0; b < 3; b++) {
        cout<<bobot[b]<<" ";
    }
    cout<<"\n";
    
    cout<<ch;

    return 0;
}