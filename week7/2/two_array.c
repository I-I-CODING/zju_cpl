/*
问题描述:
1 -> penny
5 -> nickle
10 -> dime
25 -> quarter
50 -> half-dollar
*/
#include <stdio.h>

int amount[] = {1, 5, 10, 25, 50};
char *name[] = {"penny", "nickle", "dime", "quarter", "half-dollor"};

struct
{
    int amount;
    char *name;
} coins[] = {
    {1, "penny"},
    {5, "nickle"},
    {10, "dime"},
    {25, "quarter"},
    {50, "half-dollor"}};

int main()
{
    int x;
    scanf("%d", &x);
    for (int i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
    {
        if (x == coins[i].amount)
        {
            printf("%s\n", coins[i].name);
            break;
        }
    }
}