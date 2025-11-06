/*

为什么如果一个数 n（其中 n>1）除以所有比它小的素数时，都没有被整除，那么n 一定是素数？
(1) 如果n是合数，那么n可被分解为两个因子a, b，其中1 < a <= b < n, 且a*b = n.
(2) 由于a < b, 我们有a <= \sqrt[n], （ 如果a > \sqrt[n], 那么b >= a > \sqrt[n], b*a > a*a > n, 而b*a = n, 矛盾)
(3) 因此任何一个合数必然有因子a满足1 < a < \sqrt[n]
(4) 这个因子a本身可能不是素数，但a一定有一个素因子p（由算术基本定理，即：每个大于1的自然数，要么本身就是素数，要么可以写为2个或以上的素数的积）。
(5) 所以，一定存在一个素数p使得p <= a <= \sqrt[n] < n, 且p整除n.

*/
#include <stdio.h>

#define NUMBER 100 // 使用宏定义而不是const变量

int isPrime(int x, int knoewPrimes[], int numberOfKnowPrimes);

int main(void)
{
    // const int number = 100;
    int prime[NUMBER] = {2};
    int count = 1;
    int i = 3;

    while (count < NUMBER)
    {
        if (isPrime(i, prime, count)) // 把新的素数表传递给isPrime函数用于后续检验
        {
            prime[count++] = i; // count++不改变值。例如：count = 1, count++后, count = 2, count++ = 1;
        }
        i++;
    }

    // 按照5个一行排版输出素数
    for (i = 0; i < NUMBER; i++)
    {
        printf("%d", prime[i]);
        if ((i + 1) % 5)
        {
            printf("\t");
        }
        else
        {
            printf("\n");
        }
    }
    return 0;
}

int isPrime(int x, int knowPrimes[], int numberOfKnowPrimes)
{
    int ret = 1;
    int i;
    for (i = 0; i < numberOfKnowPrimes; i++)
    {
        if (x % knowPrimes[i] == 0)
        {
            ret = 0;
            break;
        }
    }
    return ret;
}