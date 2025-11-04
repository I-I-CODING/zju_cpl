#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;

    scanf("%d", &n);

    int i;
    int sign = 1;
    for (i = 1; i <= n; i++)
    {
        sum += sign * 1.0 / i;
        sign = -sign; // 实现正负交替
    }

    printf("%lf\n", sum);

    return 0;
}