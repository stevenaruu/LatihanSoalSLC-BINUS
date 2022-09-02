#include <stdio.h>
#include <stdlib.h>

int main() {

    char nama_barang[100];
    int harga_barang;
    int jumlah_barang;

    puts("==========================");
    puts("|| SIMULASI JUAL BARANG ||");
    puts("==========================");

    printf("\n");

    printf("Masukkan nama barang: ");
    scanf("%[^\n]s", nama_barang);

    printf("Masukkan harga barang: ");
    scanf("%u", &harga_barang);

    printf("Masukkan jumlah barang: ");
    scanf("%u", &jumlah_barang);

    printf("Jadi barang yang terjual adalah %u %s dan mendapat keuntungan %u!\n", jumlah_barang, nama_barang, harga_barang*jumlah_barang);
    printf("Tekan enter untuk mengakhiri...");

    return 0;
}
