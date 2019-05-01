#include <cstdio>
#include <cmath>
int main() {
    while(1){
        int n,sq,re;
        printf("-------------------------------\n");
        printf("Please input the number : ");
        scanf("%d",&n);
        sq=sqrt(n);
        if(sq*sq==n) printf("%d is the square number of %d\n",n,sq);
        else printf("%d is not square number.\n",n);
        printf("Try again? [yes<1>, no<2>]\n");
        scanf("%d",&re);
        if(re==2) break;
    }
    return 0;
}