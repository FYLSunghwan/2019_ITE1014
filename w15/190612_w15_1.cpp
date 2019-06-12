#include <cstdio>

void square(double *k) {
    *k=(*k)*(*k);
}

int main() {
    double dvar;
    scanf("%lf",&dvar);
    square(&dvar);
    printf("%lf",dvar);
    return 0;
}