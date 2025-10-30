#include <stdio.h>

int main()
{
    // initial value
    int num;
    int count = 1;
    int x;
    int fea_x;
    int fea_count;
    int decimal = 0;

    // input
    scanf("%d", &num);

    // compute
    while (num > 0)
    {
        x = num % 10;
        num /= 10;
        fea_x = x % 2;
        fea_count = count % 2;
        if (fea_x == fea_count)
        {
            decimal += (1 << (count - 1));
        }
        count++;
    }

    // output
    printf("%d\n", decimal);

    return 0;
}