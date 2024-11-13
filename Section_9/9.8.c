#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX 6
#define MIN 1

int roll_dice(void);
bool play_game(void);

int main(void){
    char gameProgress;
    int wins;
    int losses;

    srand((unsigned) time(NULL));
    
    for(;;){
        bool res = play_game();
        if(res){
            wins++;
        }else{
            losses++;
        }

        printf("You %s!\n", res ? "win" : "loose");
        printf("Play again? ");
        scanf("%c", &gameProgress);

        if(gameProgress != 'y' && gameProgress != 'Y'){
            return 0;
        }
    }

    printf("Wins: %d and Losses: %d", wins, losses);

    return 0;    

}

int roll_dice(void){
    int random1 = rand() % 6;
    int random2 = rand() % 6;

    return random1 + random2 + 2;
}

bool play_game(void){

    int first_roll = roll_dice();
    printf("You rolled: %d\n", first_roll);
    int point = 0;

    if(first_roll == 7 || first_roll == 11){
        printf("You win!\n");
        return true;
    }
    
    if(first_roll == 2 || first_roll == 3 || first_roll == 12){
        printf("You loose!\n");
        return false;
    }

    point = first_roll;
    printf("Your point is: %d \n", first_roll);


    int second_roll;
    int res = -1;
    while(1){
        
        second_roll = roll_dice();
        printf("You rolled: %d\n", second_roll);

        if(second_roll == point){
            res = 1;
            break;
        }
        
        if(second_roll == 7){
            res = 0;
            break;
        }
    }

    return res == 1 ? true : false;

}