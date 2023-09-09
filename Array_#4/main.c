#include <stdio.h>
#include <stdlib.h>

int main()
{

    int pilih;
    int i = 0, j = 0, sum = 0;

    do {
        puts("Pilih ukuran matriks:");
        puts("1. 3x3");
        puts("2. 4x4");

        printf("pilih: ");
        scanf("%d", &pilih);
    }while(pilih != 1 && pilih != 2);

    if(pilih == 1){
        int array1[3][3];
        for(i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                int num_i = i+1, num_j = j+1;
                printf("Masukkan matriks baris ke-%d kolom ke-%d: ", num_i, num_j);
                scanf("\n%d", &array1[i][j]);
            }
        }

        printf("\nHasil matriks:\n");
        for(i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                if(j == 0){
                    printf("| ");
                }
                printf("%d ", array1[i][j]);
            }
            printf("|\n");
        }

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                sum = sum + array1[i][j];
            }
        }

        printf("Sum matriks: %d", sum);
    }else{
        int array2[4][4];

        for(i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                int num_i = i+1, num_j = j+1;
                printf("Masukkan matriks baris ke-%d kolom ke-%d: ", num_i, num_j);
                scanf("\n%d", &array2[i][j]);
            }
        }

        printf("\nHasil matriks:\n");
        for(i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(j == 0){
                    printf("| ");
                }
                printf("%d ", array2[i][j]);
            }
            printf("|\n");
        }

        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                sum = sum + array2[i][j];
            }
        }

        printf("Sum matriks: %d", sum);
    }


    return 0;
}