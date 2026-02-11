#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int count1 = 0, count2 = 0, count3 = 0;

    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '1')
            count1++;
        else if (str[i] == '2')
            count2++;
        else if (str[i] == '3')
            count3++;
    }

    int first = 1;
    while (count1 > 0)
    {
        if (first == 0)
            printf("+");
        printf("1");
        first = 0;
        count1--;
    }
    printf("\033[47m");

    while (count2 > 0)
    {
        if (first == 0)
            printf("+");
        printf("2");
        first = 0;
        count2--;
    }
    while (count3 > 0)
    {
        if (first == 0)
            printf("+");
        printf("3");
        first = 0;
        count3--;
    }

    return 0;
}
