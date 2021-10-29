#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct {
    char nama[51];
    char jenis[51];
    int hutang;
    int aset;
}data_perusahaan;

data_perusahaan data_1;

void profil()
{
    int a = 0,cmpint;
    while ( a < 1)
    {
        printf("Menu Input Profil Perusahaan\n");
        printf("Nama Perusahaan   : ");
        fflush(stdin);gets(data_1.nama);
        printf("Jenis Perusahaan  : ");
        fflush(stdin);gets(data_1.jenis);
        printf("Hutang Perusahaan : ");
        scanf("%i", &data_1.hutang);
        printf("Aset Perusahaan   : ");
        scanf("%i", &data_1.aset);
        if (strcmp(data_1.nama,"")==0 || strcmp(data_1.jenis,"")==0 || data_1.hutang==cmpint || data_1.aset==cmpint ) {
            printf("\nAda data yang kosong, Kamu harus melengkapi semua data");
        }
        else {
            a = 1;
        }
    }
}

int main()
{
    int a = 0;
    while (a < 1) {
        int opsi;

        printf("========================\n");
        printf("Program Perusahaan v.0.1\n");
        printf("========================\n");
        printf("1. Input Profil Perusahaan\n");
        printf("2. Input Penjualan\n");
        printf("3. Tampil Perusahaan\n");
        printf("4. keluar\n");
        printf("pilih opsi : ");scanf("%i",opsi);

        if (opsi == 1) {
            profil();
        }

        else if (opsi == 2) {
            //penjualan();
            printf("test_1");
        }

        else if (opsi == 3) {
            //tampil();
            printf("test_2");
        }

        else if (opsi == 4) {
            a = 1;
        }

        else {
            printf("\n\nopsi harus bernilai antara 1 - 4");
        }
    }
    
    return 0;
}