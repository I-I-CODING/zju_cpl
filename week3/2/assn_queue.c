#include <stdio.h>

int main()
{

    // initial value
    int n = 0;

    // input number
    scanf("%d", &n);

    // output odd number
    for (int i = 0; 2 * i + 1 <= n; i++)
    {
        if (i > 0)
        {
            printf(" ");
        }
        printf("%d", 2 * i + 1);
    }
}
