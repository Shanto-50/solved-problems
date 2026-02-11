#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n > 0)
    {
        int a;
        scanf("%d", &a);
        if (a == 2)
            printf("2\n");
        else if (a > 2 && a % 2 == 0)
            printf("0\n");
        else if (a % 6 == 3)
            printf("3\n");
        else
            printf("1\n");
        n--;
    }
    return 0;
}