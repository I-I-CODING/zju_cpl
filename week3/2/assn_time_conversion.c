#include <stdio.h>

int main()
{
    // initial BJT and UTC
    int BJT = 0;
    int UTC = 0;

    // input BJT
    printf("input BJT:");
    scanf("%d", &BJT);

    // judging whether BJT is valid
    if (BJT < 0 || BJT >= 2400)
    {
        printf("error;\n");
        return 1;
    }
    int hour = BJT / 100;
    int minute = BJT % 100;
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59)
    {
        printf("error;\n");
        return 1;
    }
    // conversion
    if (BJT >= 800)
    {
        UTC = BJT - 800;
    }
    else
    {
        UTC = 2400 + BJT - 800;
    }

    // output UTC
    printf("UTC is %d\n", UTC);

    return 0;
}