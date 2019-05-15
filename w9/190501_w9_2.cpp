#include <cstdio>
int main() {
    int a,b,c;
    printf("A + B - C ?\nInput A: ");
    scanf("%d",&a);
    printf("Input B: ");
    scanf("%d",&b);
    printf("Input C: ");
    scanf("%d",&c);
    printf("%d + %d - %d = %d\n",a,b,c,a+b-c);
    return 0;
}