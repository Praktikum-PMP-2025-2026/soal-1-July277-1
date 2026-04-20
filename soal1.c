/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 2
 *   Hari dan Tanggal    : Senin, 20 April 2026
 *   Nama (NIM)          : Julianysyah Putra Jalinda (13224026)
 *   Nama File           : soal1modul2.c
 *   Deskripsi           : Soal 1 – Pemulihan Sensor Fragmen
 * 
 */#include <stdio.h>

int main(){
    int N;
    int max = 0;
    scanf("%d", &N);
    int array[N];
    int array2[N];
    int temp1;
    int temp2;
    int temp3;
    int temp4;

    for(int i = 0; i < N; i++){
         scanf("%d", &array[i]);
        }
    for(int a = 0; a < N; a++){
        array2[a] = array[a];
        }

    for(int j = 1; j < N - 1; j++){
        if(array[j] == -1){
            for(int a = 0; a < j; a++){
                if(array[a] != -1){
                    temp1 = array[a];
                }else if(array[0] == -1){
                    temp3 = -1;
                }
            }
            for(int b = N; b > j; b--){
                if(array[b] != -1){
                    temp2 = array[b];
                } else if(array[N] == -1){
                    temp4 = -1;
                }
            }
                temp3 = temp1;
                temp4 = temp2;
            
                if(temp3 != -1 && temp4 != -1){
                    array[j] = (temp3 + temp4) / 2;
                } else if (temp3 != -1 && array[j+1] == -1){
                    array[j] = temp3;
                } else if (array[j-1] == -1 && temp4 != -1){
                    array[j] = temp4;
                } else if (temp3 == -1 && temp4 == -1){
                    array[j] = 0;
                }
        }
    }
    printf("\n");
    printf("RECOVERED ");
    for(int k = 0; k < N; k++){
        printf("%d ", array[k]);
    }
    printf("\n");
    for(int z = 0; z < N; z++){
        max = max + array[z];
    }
    printf("MAX_SUM %d\n", max);

    return 0;

}
