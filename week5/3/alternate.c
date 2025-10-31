#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;

    scanf("%d", &n);

    int i;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= 1.0 / i;
        }
        else if (i % 2 == 1)
        {
            sum += 1.0 / i;
        }
    }

    printf("%lf\n", sum);

    return 0;
}