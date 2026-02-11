#include <stdio.h>

int main()
{
    int n;
    double sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int p;
        scanf("%d", &p);
        sum += p;
    }

    printf("%.12f", sum / n);
    return 0;
}
