#include <cstdio>
int main() {
    int cnt=9,in;
    while(cnt--) {
        printf("Input dan.\n");
        scanf("%d",&in);
        printf("***********%ddan***********\n",in);
        for(int i=1;i<=9;i++) {
            printf("%d*%d=%d\n",in,i,in*i);
        }
        printf("***************************\n");
    }
    return 0;
}