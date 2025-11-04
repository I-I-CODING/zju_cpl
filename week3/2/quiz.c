#include <stdio.h>

int main()
{
    for (int i = 10; i > 1; i /= 2)
    {
        printf("%d\n", i++); // i++在printf里也会执行，影响后续的i;
    }
}