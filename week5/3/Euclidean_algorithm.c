#include <stdio.h>

int main()
{
    int a;
    int b;

    scanf("%d %d", &a, &b);
    while (1)
        if (b == 0)
        {
            printf("%d is gcd;\n", a);
            break;
        }
        else
        {
            int t;
            t = a % b;
            a = b;
            b = t;
        }
}