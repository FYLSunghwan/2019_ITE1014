#include <time.h>
#include <cstdio>
#include <cstdlib>

int main() {
     char str[256];
     int k,r,cnt=0;
     srand(time(NULL));
     r=rand()%20+1;
     printf("Hello! What is your name?\n");
     scanf("%s",str);
     while(1) {
         ++cnt;
         printf("Take a guess.\n" );
         scanf("%d",&k);
         if(k<r) printf("Your guess is too low.\n");
         else if(k>r) printf("Your guess is to high.\n");
         else {
             printf("Good Job,%s! You guessed my number in %d guesses!\n",str,cnt);

         }
     }
}