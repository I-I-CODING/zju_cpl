#include <stdio.h>

int main()
{
    // initial value
    int x;
    int n = 0;

    // input number
    printf("please input number: ");
    scanf("%d", &x);

    // do-while-loop
    do
    {
        n++;
        x /= 10;
    } while (x > 0);

    // judgement
    printf("the digits of number is %d ", n);

    return 0;
}