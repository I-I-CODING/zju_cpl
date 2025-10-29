// #include <stdio.h>

// int main()
// {
//     // initial value
//     int number;
//     int sum = 0;
//     int count = 0;

//     // input number
//     scanf("%d", &number);

//     // loop
//     while (number != -1)
//     {
//         sum += number;
//         count++;
//         scanf("%d", &number);
//     }

//     // output summation
//     printf("%f", 1.0 * sum / count);
// }

// ...existing code...
#include <stdio.h>

int main()
{
    // initial value
    int number;
    int sum = 0;
    int count = 0;

    // input number
    if (scanf("%d", &number) != 1)
        return 0; // 如果number不是整数，scanf("%d", &number) == 0,表示false;return 0:结束程序

    // loop
    while (number != -1)
    {
        sum += number;
        count++;
        if (scanf("%d", &number) != 1)
            break;
    }

    // output summation
    if (count > 0)
        printf("%f\n", (double)sum / count);
    else
        printf("No numbers\n");

    return 0;
}
// ...existing code...