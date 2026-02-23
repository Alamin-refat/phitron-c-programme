#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    int hidden = rand()%100+1;

    int guess_of_number=0;
    while(guess_of_number<10){
        int guess;
        scanf("%d", &guess);


        if(guess==hidden){
            printf("you are right\n");
            break;
        }
        else if(guess>hidden){
            printf("guess smaller\n");
        }
        else{
            printf("guess larger\n");
        }

        guess_of_number++;


    }

    if(guess_of_number==10){
        printf("you failed");
    }

}
