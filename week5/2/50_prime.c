#include <stdio.h>
int main()
{
    int count = 0;
    int i = 2;

    // while (count < 50)
    for (i = 2; count < 50; i++)
    {
        int j;
        int is_Prime = 1;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_Prime = 0;
                break;
            }
        }
        if (is_Prime == 1)
        {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");

    return 0;
}