#include <stdio.h>

int main()
{
    // initial value
    int num = 0;
    int odd = 0;
    int even = 0;

    // input
    scanf("%d", &num);

    // loop
    while (num != -1)
    {
        if (num % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        scanf("%d", &num);
    }

    // output
    printf("%d %d\n", odd, even);

    return 0;
}
