#include <cstdio>

int main() {
    int arr1d[12] = {10,20,30,40,50,60,70,80,90,100,110,120};
    int arr2d[3][4];
    for(int i=0;i<3;i++) {
        for(int j=0;j<4;j++) {
            arr2d[i][j]=arr1d[i*3+j];
            printf("%d ",arr2d[i][j]);
        }
        printf("\n");
    }
    for(int i=2;i>=0;i--) {
        for(int j=3;j>=0;j--) {
            arr1d[i*3+j] = arr2d[i][j];
            printf("%d ",arr1d[i*3+j]);
        }
    }
    return 0;
}