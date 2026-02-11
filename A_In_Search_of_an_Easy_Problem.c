#include <stdio.h>
int main()
{
    int n, k = 0, i;
    scanf("%d", &n);
    int a[n];

    for (i = 0; i <= n - 1; i++)
    {

        scanf("%d", &a[i]);
    }
    for (i = 0; i <= n - 1; i++)
    {
        if (a[i] == 1)
        {

            k = 1;
            break;
        }
    }
    if (k == 1)
        printf("HARD");
    else
        printf("EASY");

    return 0;
}