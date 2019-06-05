#include <cstdio>

int main() {
    double arr[] = {1.,2.,3.,4.,5.};
    printf("%d %d\n",&arr[0],arr);
    printf("%d %d\n",&arr[1],arr+1);
    printf("%d %d\n",&arr[2],arr+2);

}