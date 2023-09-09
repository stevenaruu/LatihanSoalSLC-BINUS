#include <stdio.h>
#include <stdlib.h>

int main()
{
    char jenis_kelamin;
    int umur;

    puts("====================");
    puts("|| VALIDASI INPUT ||");
    puts("====================");

    do {
        printf("Masukkan umur: ");
        scanf("%d", &umur);
    }while(umur <= -1);

    do {
        printf("Masukkan jenis kelamin [L atau P]: ");
        scanf(" %c", &jenis_kelamin);
    }while(jenis_kelamin != 'L' && jenis_kelamin != 'P' && jenis_kelamin != 'l' && jenis_kelamin != 'p');

    printf("\n");

    if(jenis_kelamin == 'L' || jenis_kelamin == 'l'){
        printf("Saya seorang laki-laki berumur %d!", umur);
    }else if(jenis_kelamin == 'P' || jenis_kelamin == 'p'){
        printf("Saya seorang perempuan berumur %d!", umur);
    }

    printf("\nTekan enter untuk mengakhiri...");






    return 0;
}