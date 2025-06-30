#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
    srand(time(NULL)); 

    int number = (rand() % 100) + 1; // Now we can take any random numbers between 1 and 100
    int guess = 0;

    do
    {
        printf ("\nEnter Guess : ");
        scanf ("%d", &guess);

        if (guess < number)
        {
            printf ("\nGuess Higher");
        }
        else if (guess > number)
        {
            printf ("\nGuess Lower");
        }
        else
        {
            printf ("\nYou won !");
        }
    } while (guess != number);

    return 0;

}