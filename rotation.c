#include<stdio.h>

void right_rotation(int matris[][], int n){
    int n;
    int temp[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp[i][j] = matris[n-j-i][i];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matris[i][j] = temp[i][j];
        }
    }
}
void left_rotation(int matris[][], int n){
    int n;
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
int main(){
    int n;
    int matris[100][100];
    printf("Matrisin boyutunu (n) giriniz: ");
    scanf("%d", &n);
    printf("Matrisin elemanlarini giriniz: \n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &matris[i][j]); 
        }
    }

    for(int i=0; i<n; i++){
        printf("[")
        for(int j=0; j<n; j++){
            printf("%d", matris[i][j]); 
        }
        printf("]");
    }


    




}