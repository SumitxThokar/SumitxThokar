#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//We are making guess game.
int main(){
    int number,guess,nguess=1;
    srand(time(0));
    number=rand()%50+1;
    
    do{
        printf("Enter your number between 1 to 50\n");
        scanf("%d",&guess);
        if(guess<number){
            printf("Higher number please\n");
        }
        else if(guess>number){
            printf("Lower number please\n");
        }
        else{
            printf("You guessed it right in %d attempts\n",nguess);
        }
        nguess++;
    }
    while(guess!=number);
    
    return 0;
}