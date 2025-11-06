#include <stdio.h>

int search(int key, int a[], int len);

int main()
{
    int a[] = {1, 4, 9, 13, 15, 18, 26, 27, 36, 45, 48, 53, 73};
    int x;
    printf("请输入查找的数字: \n");
    scanf("%d", &x);
    int r = search(x, a, sizeof(a) / sizeof(a[0]));
    if (r == -1)
    {
        printf("没有找到这个数\n");
    }
    else
    {
        printf("这个数在第%d位\n", r + 1);
    }
    return 0;
}

int search(int key, int a[], int len)
{
    int left = 0;
    int right = len - 1;
    int ret = -1;
    int mid = (left + right) / 2;
    while (left <= right)
    {
        if (key == a[mid])
        {
            ret = mid;
            break;
        }
        else
        {
            if (key > a[mid])
            {
                left = mid + 1;
            }
            else if (key < a[mid])
            {
                right = mid - 1;
            }
            mid = (left + right) / 2;
        }
    }
    return ret;
}