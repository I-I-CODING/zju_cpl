#include <stdio.h>

int search(int key, int a[], int len);

int main()
{
    int x;
    int r;
    int a[] = {1, 3, 5, 6, 72, 57, 83, 5, 8, 43, 1, 34, 64, 75};
    printf("请输入要查找的数字： ");
    scanf("%d", &x);
    r = search(x, a, sizeof(a) / sizeof(a[0]));
    if (r = -1)
    {
        printf("没有找到数字%d\n", x);
    }
    else
    {
        printf("%d在第%d位上\n", x, r);
    }
}

int search(int key, int a[], int len)
{
    int ret = -1;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == key)
        {
            ret = i;
            break;
        }
    }
}