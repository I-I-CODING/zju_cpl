#include <stdio.h>

// 找出最大的数，先用0位与1位比较，较大者再与2位比较，以此类推
int max(int a[], int len)
{
    int maxid = 0;
    for (int i = 1; i < len; i++)
    {
        if (a[i] > a[maxid])
        {
            maxid = i;
        }
    }
    return maxid;
}

int main()
{
    int a[] = {2, 45, 42, 65, 32, 13, 64, 33, 67, 35, 43, 67, 75, 34, 23};
    int len = sizeof(a) / sizeof(a[0]);
    // 将最大数放在与最高位的数字交换，比较剩下的数字里的最大数，最终形成升序
    for (int i = len - 1; i > 0; i--)
    {
        int maxid = max(a, i + 1);
        int t = a[maxid];
        a[maxid] = a[i];
        a[i] = t;
    }
    // 打印出排好的序列
    for (int i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}
