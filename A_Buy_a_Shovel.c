#include <stdio.h>
int main()
{
    int k, r;
    scanf("%d%d", &k, &r);
    int i = 1;
    while (1)
    {
        if ((k * i) % 10 == 0 || (k * i) % 10 == r)
        {
            printf("%d", i);
            break;
        }
        i++;
    }
    return 0;
}