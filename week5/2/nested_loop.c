#include <stdio.h>

int main()
{
    // initial value
    int i = 2;
    int j = 2;

    // loop
    for (i = 2; i <= 100; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (j == i) // 关键：验证j一直++到i都没找到因子，否则所有数字都输出
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}