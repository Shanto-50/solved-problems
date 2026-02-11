#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d", &x, &y);
    int real = x;
    for (int i = 1; i <= y; i++)
    {
        z = x % 10;
        if (z != 0)
            x = x - 1;
        else if (z == 0)
            x = x / 10;
    }
    printf("%d", x);
    return 0;
}