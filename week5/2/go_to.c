#include <stdio.h>

int main()
{
    int x;
    int one, two, five;
    int exit = 0;
    scanf("%d", &x);
    for (one = 1; one <= x * 10; one++)
    {
        for (two = 1; two <= x * 10 / 2; two++)
        {
            for (five = 1; five <= x * 10 / 5; five++)
            {
                if (one + two * 2 + five * 5 == x * 10)
                {
                    exit = 1;
                    printf("we can use %d one plus %d two plus %d five to get %d yuan\n", one, two, five, x);
                    goto out;
                }
            }
        }
    }
out:
    return 0;
}