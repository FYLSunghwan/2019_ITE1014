#include <cstdio>
int main() {
    int cnt=5;
    for(int i=1;i<=cnt;i++) {
        for(int j=5;j>=i+1;j--) {
            printf(" ");
        }
        for(int j=1;j<=2*i-1;j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}