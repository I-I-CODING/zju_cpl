#include <stdio.h>

int main()
{
    // initial value
    int factor = 1;
    int n = 0;

    // input value
    printf("please input value: ");
    scanf("%d", &n);

    // for_loop
    for (int i = n; i >= 1; i--)
    {
        factor *= i;
    }

    // output factor
    printf("the faxtorial of the value is : %d \n", factor);

    return 0;
}