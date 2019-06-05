#include <cstdio>

int mean(int arr[], const int n) {
    int sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    return sum;
}

int main() {
    int ar[] = {1,2,3,4,5};
    double arr[] = {1.,2.,3.,4.,5.};
    printf("%d %d\n",&arr[0],arr);
    printf("%d",mean(ar,5));

}