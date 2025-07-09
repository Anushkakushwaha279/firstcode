#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()  {
    int random, guess;
    int no_of_guess =0;
    srand(time(NULL));

    printf("welcome to the world of guessing number\n");
    
    random = rand() % 100 + 1;
    printf("number generated: %d", random);

    do{
        printf("\nplease enter your guess number between(1 to 100): ");
        scanf("%d",&guess);
        no_of_guess++;

    if(guess<random) {
        printf("guess larger number. \n");
    } else if(guess>random) {
        printf("guess a smaller number. \n");
    }else{
        printf("congratulations! you have successfully guess the number in %d attempts", no_of_guess);
    }
    
}while (guess != random);

    printf("\n Bye Bye, Thanks for playing.\n");
    printf("develop by: Anushka");


 return 0;

}