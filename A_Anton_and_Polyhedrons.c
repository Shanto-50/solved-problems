#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int count = 0;
    char str[20];
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", str);
        if (str[0] == 'I')
            count = count + 20;
        else if (str[0] == 'C')
            count = count + 6;
        else if (str[0] == 'T')
            count = count + 4;
        else if (str[0] == 'D')
            count = count + 12;
        else if (str[0] == 'O')
            count = count + 8;
    }
    printf("%d", count);
    return 0;
}