#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int main()
// {
//     // initial value
//     int guess;
//     int count = 0;

//     // generate a random number between 1 and 100;
//     srand(time(0));
//     int random = rand() % 100 + 1;

//     // input the guessed number
//     printf("please enter your guessed number: ");
//     scanf("%d", &guess);

//     // loop
//     while (guess != random)
//     {
//         if (guess > random)
//         {
//             printf("your guessed number is too high \n");
//         }
//         else
//         {
//             printf("your guessed number is too small \n");
//         }
//         count++;
//         printf("you guessed %d times \n", count);
//         printf("please enter your guessed number again: ");
//         scanf("%d", &guess);
//     }

//     // break
//     count++;
//     printf("you guessed %d times and guessed right!\n", count);
// }

// do while

int main()
{
    // initial value;
    int guess;
    int count = 0;

    // generate a random number between 1 and 100;
    srand(time(0));
    int random = rand() % 100 + 1;

    // do-while;
    do
    {
        // input the guessed number;
        printf("please enter your guessed number: ");
        scanf("%d", &guess);
        count++;
        if (guess > random)
        {
            printf("your guessed number is too high\n");
        }
        else if (guess < random)
        {
            printf("your guesses number is too small\n");
        }
    } while (guess != random);

    // congratulations
    printf("you guessed %d times and guessed right!\n", count);
}