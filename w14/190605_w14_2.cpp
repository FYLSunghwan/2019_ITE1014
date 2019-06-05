#include <cstdio>
#include <algorithm>
using namespace std;

int strlen(char *str) {
    int i=0;
    while(str[i++]!='\0');
    return i-1;
}

int strcmp(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] > str2[i]) return str1[i] - str2[i];       // arr1 > arr2 이면 양수
        if (str1[i] < str2[i]) return str1[i] - str2[i];       // arr1 < arr2 이면 음수
        i++;
    }
    return 0;
}

void strcpy(char *src, char *dest) {
    for(int i=0;src[i]!='\0';i++) {
        dest[i]=src[i];
    }

}

void strcat(char *dest, char *src) {
    int l = strlen(dest);
    for(int i=0;src[i]!='\0';i++) {
        dest[l+i]=src[i];
    }
    dest[l+strlen(src)]='\0';
}

int main() {
    char a[127]="abc",b[127]="def",c[127];
    printf("strlen: %d\n",strlen(a));
    printf("strcmp: %d\n",strcmp(a,a));
    printf("strcmp: %d\n",strcmp(a,b));
    strcpy(a,c);
    printf("strcpy: %s\n",c);
    strcat(a,b);
    printf("strcat: %s\n",a);
    return 0;
}
