#include <stdio.h>

int main()
{
    // initial value
    int n;
    int factor = 1;
    int i = 1;

    // input n
    printf("please input the number you want to calculate the factorial of : ");
    scanf("%d", &n);

    // calculate
    while (i <= n)
    {
        factor *= i;
        i++;
    }

    // output result
    printf("the factorial of the number is : %d \n", factor);
}