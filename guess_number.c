#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number = rand()%100 + 1; //random no. between 1 to 100
    printf("The number is %d\n", number);
    //keep running the loop until the number is guessed.
    do
    {
        printf("Guess the Number between 1 to 100\n");
        scanf("%d\n" , &guess);

        if (guess>number)
        {
            printf("TRY A SMALLER NUMBER\n");
        }
        else if (guess<number)
        {
            printf("TRY A BIGGER NUMBER\n");
        }
        else{
            printf("You guessed it right in %d attempts\n",nguesses);
        }
        nguesses++;
        
    } while (guess != number);
    

return 0;
}