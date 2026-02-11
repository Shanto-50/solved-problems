#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int dominos = (x * y) / 2;
    printf("%d", dominos);
}