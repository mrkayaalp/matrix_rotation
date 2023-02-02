#include<stdio.h>

void right_rotation(int matris[][], int n){
    int n;
    int temp[100][100];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            temp[i][j] = matris[n-j-i][i]
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            matris[i][j] = temp[i][j];
        }
    }
}   
matris[j][n-i-1]


int main(){




}