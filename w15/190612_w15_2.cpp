#include <cstdio>

void getSumDiff(int a, int b, int* pSum, int* pDiff) {
    *pSum = a+b;
    *pDiff = a-b>0?a-b:b-a;
}

int main() {
    int a, b, sum, diff;
    scanf("%d%d",&a,&b);
    getSumDiff(a,b,&sum,&diff);
    printf("sum:%d diff:%d",sum,diff);
}