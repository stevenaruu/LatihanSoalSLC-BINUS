#include <stdio.h>
#include <stdlib.h>

int main()
{

    int angka;

    puts("=================================");
    puts("|| CEK ANGKA GANJIL ATAU GENAP ||");
    puts("=================================");

    printf("Masukkan angka: ");
    scanf("%d", &angka);

    printf("\n");

    if(angka % 2 == 0){
        printf("Angka %d merupakan bilangan genap!", angka);
    }else{
        printf("Angka %d merupakan bilangan ganjil!", angka);
    }

    printf("\nTekan enter untuk mengakhiri...");

    return 0;
}