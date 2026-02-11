#include <stdio.h>
int main()
{
    int x, steps;
    scanf("%d", &x);
    if (x < 5)
        steps = 1;
    else if (x == 5)
    {
        steps = 1;
    }
    else if (x > 5 && x % 5 == 0)
    {
        steps = x / 5;
    }
    else if (x > 5 && x % 5 != 0)
    {
        steps = (x / 5) + 1;
    }
    printf("%d", steps);
}