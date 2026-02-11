#include <stdio.h>
#include <string.h>
int main()
{
    char str[201];
    scanf("%s", str);
    int i = 0, printed = 0;
    while (i < strlen(str))
    {
        if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')
        {
            i = i + 3;
            if (printed == 1)
            {
                printf(" ");
                printed = 0;
            }
        }
        else
        {
            printf("%c", str[i]);
            printed = 1;
            i++;
        }
    }
    return 0;
}