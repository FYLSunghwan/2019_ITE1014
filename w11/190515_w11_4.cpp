#include <cstdio>
#include <cstdlib>
#include <unistd.h>
#include <time.h>
#include <string.h>


void displayIntro() {
    printf("You are in a land full of dragons. In front of you,\n");
    printf("you see two caves. In one cave, the dragon is friendly\n");
    printf("and will share his treasure with you. The other dragon\n");
    printf("is greedy and hungry, and will eat you on sight.\n\n");
}

int chooseCave() {
    int cave=0;
    while(cave!=1 && cave!=2) {
        printf("Which cave will you go into? (1 or 2)\n");
        scanf("%d",&cave);
    }
    return cave;
}

void checkCave(int chosenCave) {
    srand(time(NULL));
    printf("You approach the cave...\n");
    sleep(2);
    printf("It is dark and spooky...\n");
    sleep(2);
    printf("A large dragon jumps out in front of you! He opens his jaws and...\n");
    printf("\n");
    sleep(2);
    int friendlyCave=random()%2+1;
    if(friendlyCave == chosenCave) printf("Gives you his treasure!\n");
    else printf("Gobbles you down in one bite!\n");
}

int main() {
    int playAgain=1;
    while(playAgain) {
        displayIntro();
        int caveNumber = chooseCave();
        checkCave(caveNumber);
        printf("Do you want to play again? (yes or no)\n");
        char in[100];
        scanf("%s",in);
        if(!strcmp(in,"no")) playAgain=0;
    }
    return 0;
}