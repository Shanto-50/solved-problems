#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    while (t--)
    {
        int count = 0;
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            count = (n / 2) - 1;
        }
        else if (n <= 2)
            count = 0;
        else
        {
            count = n / 2;
        }
        printf("%d\n", count);
    }
    return 0;
}