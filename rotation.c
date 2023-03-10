#include<stdio.h>

void right_rotation(int matris[][100], int n){
    int temp[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp[i][j] = matris[n-j-1][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matris[i][j] = temp[i][j];
        }
    }
}
void left_rotation(int matris[][100], int n){
    int temp[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp[i][j] = matris[j][n-i-1];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matris[i][j] = temp[i][j];
        }
    }
}
void matris_yazdir(int matris[][100], int n){
     for(int i=0; i<n; i++){
        printf("[");
        for(int j=0; j<n; j++){
            printf("%d", matris[i][j]); 
        }
        printf("]\n");
    }
}

int main(){
    int n;
    int matris[100][100];
    int yon;
    printf("Matrisin boyutunu (n) giriniz: ");
    scanf("%d", &n);
    printf("Matrisin elemanlarini giriniz: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matris[i][j]); 
        }
    }
    matris_yazdir(matris, n);
    printf("Matrisi sağa çevirmek icin '0', sola cevirmek icin '1' tuslayiniz:" );
    scanf("%d", &yon);
    if(yon == 0)
        right_rotation(matris, n);
    if(yon == 1)
        left_rotation(matris, n);
    matris_yazdir(matris, n);
}