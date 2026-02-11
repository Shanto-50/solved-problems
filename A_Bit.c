#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char str[10];
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str);
        if (str[0] == '+' || str[strlen(str) - 1] == '+')
            x++;
        else if (str[0] == '-' || str[strlen(str) - 1] == '+')
            x--;
    }
    printf("%d", x);
    return 0;
}