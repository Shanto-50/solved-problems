#include <stdio.h>
int main()
{
    int x, y, z, sum = 0;
    scanf("%d%d%d", &x, &y, &z);
    for (int i = 1; i <= z; i++)
    {
        sum = sum + (x * i);
    }
    if (y < sum)
        printf("%d", sum - y);
    else
        printf("0");
    return 0;
}