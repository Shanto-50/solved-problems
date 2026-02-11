#include <stdio.h>
int main()
{
    int n, x, y, z, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &x, &y, &z);

        if (x + y + z >= 2)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}