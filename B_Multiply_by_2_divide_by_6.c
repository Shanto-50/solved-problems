#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    long long n;
    while (t--)
    {
        scanf("%lld", &n);
        int move = 0;
        while (n != 1)
        {
            if (n % 6 == 0)
            {
                n = n / 6;
                move++;
            }
            else if (n % 3 == 0)
            {
                n = n * 2;
                move++;
            }
            else
            {
                move = -1;
                break;
            }
        }
        printf("%d\n", move);
    }
    return 0;
}