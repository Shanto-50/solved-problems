#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str1[100], str2[100];
    gets(str1);
    gets(str2);

    for (int i = 0; i < strlen(str1); i++)
    {
        char x = tolower(str1[i]);
        char y = tolower(str2[i]);
        if (x < y)
        {
            printf("-1");
            return 0;
        }
        else if (x > y)
        {
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}