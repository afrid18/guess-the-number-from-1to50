//THIS IS AN INTERACTIVE GAME..
//BUILT BY AFRID HUSSAIN
//GUESS THE NUMBER FORM 1 - 50
//ANY BUGS? FEEL FREE TO ISSUE ON GITHUB "https://github.com/afrid83/guess-the-number-from-1to50"



#include<stdio.h>
#include<time.h>
#include<stdlib.h>


//=============wannaplay function================

int WannaPlay() {
    char YesOrNo='n';
    printf("\n\nWant to play game again?\n\n");
    printf("Press Y or y for YES and n or N for NO\n\n");
    getchar();
    scanf("%c",&YesOrNo);
    if(YesOrNo == 'y')
        return 1;
    else
        return 0;
}


//================playgame function===========

void playGame() {
    printf("=========================Guess the random number....!=========================");
    printf("\n\n");
    printf("======YOU ARE GIVEN ATMOST 5 LIVES FOR GUEESING A NUMBER BETWEEN 1 AND 50======");
    printf("\n\n");
    printf("Please enter the number.....\n\n");
    int i = 0;
    srand(time(NULL));
    int OriginalNumber = rand() % 51 + 1;
    int UserNumber = 52;
    do {
        scanf("%d",&UserNumber);
        if(UserNumber == OriginalNumber){
            printf("\n\nYeh You gussed the correct number");
            return;
        }
        else if(UserNumber < OriginalNumber)
            printf("\n\nNO....it's higher than %d....:(\n\n",UserNumber);
        else if(UserNumber > OriginalNumber)
            printf("\n\nNO....it's Lesser than %d....:(\n\n",UserNumber);
        i++;
    }while(i < 5);
}

//================main function==================


int main(void) {
    do{
        playGame();
    }while(WannaPlay());
}