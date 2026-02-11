#include <stdio.h>
int main()
{
    int rooms, p, q, count = 0;
    scanf("%d", &rooms);
    for (int i = 1; i <= rooms; i++)
    {
        scanf("%d%d", &p, &q);
        int z = q - p;
        if (z >= 2)
            count++;
    }
    printf("%d", count);
    return 0;
}