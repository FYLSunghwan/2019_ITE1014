#include <cstdio>
int main() {
    int n,i=0;
    scanf("%d",&n);
    while(i<n) {
        i++;
        int j=n-i;
        while(j) {
            j=j-1;
            printf(" ");
        }
        j=1;
        while(j<=2*i-1) {
            if(j==1 || j==2*i-1 || i==n) printf("*");
            else printf(" ");
            j=j+1;
        }
        printf("\n");
    }
}
