#include <stdio.h>

int main()
{
    const int number = 10; // 定义只读变量, 数组大小为10
    int x;
    int count[number];
    int i;

    // 初始化数组元素
    for (i = 0; i < number; i++)
    {
        count[i] = 0;
    }

    scanf("%d", &x);

    while (x != -1)
    {
        if (x >= 0 && x <= 9)
        {
            count[x]++;
        }
        scanf("%d", &x);
    }
    for (i = 0; i < number; i++)
    {
        printf("%d出现了%d次 \n", i, count[i]);
    }

    return 0;
}