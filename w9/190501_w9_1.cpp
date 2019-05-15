#include <cstdio>
int main() {
    char name[256], gender[256], dest[256];
    int birth, trip;

    printf("Input your name:");
    scanf("%s",name);
    printf("Gender:");
    scanf("%s",gender);
    printf("Day of birth:");
    scanf("%d",&birth);
    printf("Destination:");
    scanf("%s",dest);
    printf("Period of trip:");
    scanf("%d",&trip);

    printf("===================================\n");
    printf("NAME:             %s\n",name);
    printf("GENDER:           %s\n",gender);
    printf("DAY OF BIRTH:     %d\n",birth);
    printf("DESTINATION:      %s\n",dest);
    printf("PERIOD OF TRIP:   %d\n",trip);
    printf("===================================\n");
    return 0;
}