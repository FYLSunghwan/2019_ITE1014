#include <cstdio>
int main() {
    int arrint[] = {1,2,3,4,5,6,7};
    float arrf[] = {1,2,3,4,5,6,7};
    double arrd[] = {1,2,3,4,5,6,7};
    printf("int %d float %d double %d",sizeof(arrint),sizeof(arrf),sizeof(arrd));
}