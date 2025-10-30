#include <stdio.h>

int main()
{
    // initial value
    int n;
    int i = 2;
    int isPrime = 0;

    // input
    printf("please enter a number: ");
    scanf("%d", &n);

    // judging
    for (i = 2; i < n; i++) // 必须初始化
    {
        if (n % i == 0) // 括号内也可执行
        {
            isPrime = 1;
            break;
        }
    }
    if (isPrime == 1)
    {
        printf("%d is not a prime number;\n", n);
    }
    else
    {
        printf("%d is a prime number;\n", n);
    }

    return 0;
}