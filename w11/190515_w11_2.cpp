#include <cstdio>
#include <cstdlib>
#include <ctime>

int comp(int var1, int var2) {
    if(var1>var2) return 1;
    if(var1<var2) return -1;
    return 0;
}

int main() {
    srand(time(NULL));
    int r=rand()%101,n;
    while(1) {
        printf("Number=?\n");
        scanf("%d",&n);
        if(comp(n,r)==1) printf("Smaller than %d.\n",n);
        else if(comp(n,r)==-1) printf("Larger than %d.\n",n);
        else {
            printf("Yes. Right.");
            break;
        }
    }
    return 0;
}