// ...existing code...
/*
 A program that reads integer inputs terminated by -1,
 prints the average of the entered numbers and then prints
 the numbers that are greater than that average.
*/

#include <stdio.h>

int main()
{
    int x;            // 临时变量：每次读取的输入值
    double sum = 0.0; // 所有输入值的累加和（使用 double 以保留小数）
    int cnt = 0;      // 已读取的有效输入数量（不包含哨兵 -1）
    int number[100];  // 存放输入值的数组，最多 100 个（注意边界检测）

    /* 读取输入，-1 为结束标记（不存入数组） */
    scanf("%d", &x);

    while (x != -1)
    {
        if (cnt < 100) // 防止数组越界
        {
            number[cnt] = x; // 将当前输入保存到数组
            sum += x;        // 累加
            cnt++;           // 更新计数
        }
        scanf("%d", &x); // 继续读取下一个输入
    }

    if (cnt > 0) // 避免除以 0
    {
        printf("%f\n", sum / cnt); // 输出平均值
        int i;                     // 循环索引用于遍历已存元素（索引范围 0..cnt-1）
        for (i = 0; i < cnt; i++)
        {
            if (number[i] > sum / cnt) // 若元素大于平均值，则输出
            {
                printf("%d\n", number[i]);
            }
        }
    }
    return 0;
}
