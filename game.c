#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()  {
    int random, guess;
    int no_of_guess =0;
    srand(time(NULL));
    char name[]="         "  ;
    printf(" enter your nick name: ", name );
    scanf("%s", name);
 
 
    
    printf("hello!! %s\n", name);
    printf("welcome to the world of guessing number\n");
    
    random = rand() % 100 + 1;
    

    do{
        printf("\nplease enter your guess number between(1 to 100): ");
        scanf("%d",&guess);
        no_of_guess++;

    if(guess<random) {
        printf("guess larger number. \n");
    } else if(guess>random) {
        printf("guess a smaller number. \n");
    }else{

        printf("congratulation!! \n");
        printf("you have successfully guess the number in %d attempts\n", no_of_guess);
    }
    
}while (guess != random);

    
    printf("%c, Thanks for playing.\n");
    printf(" Bye Bye\n");
    printf("develop by: Anushka");


 return 0;

}
