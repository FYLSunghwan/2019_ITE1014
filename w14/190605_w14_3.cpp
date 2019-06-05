#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstring>

int main() {
    srand(time(0));
    printf("S T A R T\n");
    while(1){
        int rn;
        int num[3]={0,0,0}, inp2[3]={0,0,0},inp;
        while(num[0] == num[1] || num[1] == num[2] || num[2]==num[0]) {
            rn = random() % 1000;
            num[0] = rn / 100;
            num[1] = rn / 10 % 10;
            num[2] = rn % 10;
        }

        int strike=0, ball=0;
        while(strike<3) {
            printf("=======================");
            printf("\nGuess Numbers (000 ~ 999):\n");
            scanf("%d",&inp);
            inp2[0]=inp/100;
            inp2[1]=inp/10%10;
            inp2[2]=inp%10;

            strike=0;
            ball=0;

            for(int i=0;i<3;i++) {
                if(inp2[i] == num[i]) strike++;
                if(inp2[i] == num[(i+1)%3]) ball++;
                if(inp2[i] == num[(i+2)%3]) ball++;
            }
            if(strike<3) printf("%d strike, %d ball\n",strike,ball);
        }
        int inp3;
        printf("Yes! The secret number is %d.  You have won!",rn);
        printf("Do you want to play again? (1 or 0)");
        scanf("%d",&inp3);
        if(!inp3)) break;
    }
}
