#include <stdio.h>
#include <string.h>
int main()
{
    int x;
    scanf("%d", &x);
    char str[x];
    scanf("%s", str);
    int y = strlen(str);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == str[i + 1])
        {
            count++;

            str[i] = str[i + 1];
        }
    }
    printf("%d", count);
    return 0;
}