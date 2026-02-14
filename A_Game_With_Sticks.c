#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int min = n;
    if (min > m)
        min = m;
    if (min % 2 == 0)
        printf("Malvika");
    else
        printf("Akshat");
    return 0;
}