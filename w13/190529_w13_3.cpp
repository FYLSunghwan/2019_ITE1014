#include <cstdio>

int getMax(int *ar, int size) {
    int maxs=-1;
    for(int i=0;i<size;i++) maxs=*(ar+i)>maxs?*(ar+i):maxs;
    return maxs;
}

int getMin(int *ar, int size) {
    int mins=999999;
    for(int i=0;i<size;i++) mins=*(ar+i)<mins?*(ar+i):mins;
    return mins;
}



int main() {
    double arr[] = {1.,2.,3.,4.,5.};
    printf("%d %d\n",&arr[0],arr);
    printf("%d %d\n",&arr[1],arr+1);
    printf("%d %d\n",&arr[2],arr+2);

    double *ptr = NULL;
    ptr = arr;
    printf("%d %d\n",ptr,&arr[0],arr);
    printf("%d %d\n",ptr+2,&arr[2],arr+2);
    printf("%d %d\n",*ptr,*arr,arr[0]);
    printf("%d %d\n",*(ptr+2),*(arr+2),arr[2]);

    int m =7;
    int* ptr2 = &m;
    printf("%d %d\n",ptr2,*ptr2);
    *ptr2=10;
    printf("M:%d",m);

    int arr2[] = {1,2,3,4,5,6,7,8,9};
    int sum=0;
    for(int i=0;i<9;i++) printf("%d ",arr[i]);
    for(int i=0;i<9;i++) sum+=*(arr+i);
    printf("%d\n",sum);
    for(int i=8;i>=0;i--) printf("%d ",*(arr+i));

    int arr3[5];
    for(int i=0;i<5;i++) scanf("%d",arr3+i);
    printf("%d\n",getMax(arr3,5));
    printf("%d\n",getMin(arr3,5));


}