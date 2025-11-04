#include <stdio.h>

int main()
{
    // defining initial value
    int n = 1;
    int x;

    // enter number
    printf("enter number: ");
    scanf("%d", &x);

    // single digit
    x /= 10;

    // while loop
    while (x > 0)
    {
        n++;
        x /= 10;
    }

    // input judgement
    printf("the number of digits is %d. ", n);

    return 0;
}