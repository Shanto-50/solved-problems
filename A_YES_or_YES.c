#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int t;
    scanf("%d", &t);
    char str[5];
    while (t--)
    {
        scanf("%s", str);
        for (int i = 0; i < strlen(str); i++)
        {
            str[i] = tolower(str[i]);
        }
        if (strcmp(str, "yes") == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}