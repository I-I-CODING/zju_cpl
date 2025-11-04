#include <stdio.h>

int main()
{

    // initial value
    int grade = 0;

    // input grade
    scanf("%d", &grade);

    // switch grade
    grade /= 10;

    // conversion
    switch (grade)
    {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    default:
        printf("E\n");
        break;
    }
}