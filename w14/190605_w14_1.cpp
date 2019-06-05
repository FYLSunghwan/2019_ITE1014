#include <cstdio>

int main() {
    int arr_2d[3][4] = {10,20,30,40,50,60,70,80,90,100,110,120};
    for(int i=0;i<3;i++) {
        for (int j = 0; j < 4; j++) printf("%d ", arr_2d[i][j]);
        printf("\n");
    }
    for(int i=0;i<3;i++) {
        for (int j = 0; j < 4; j++) printf("%d ", *(*(arr_2d+i)+j));
        printf("\n");
    }
}