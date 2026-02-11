#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d%d", &x, &y);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int j = 0; j < x; j++)
    {
        if (arr[j] <= y)
            sum = sum + 1;
        else if (arr[j] > y)
            sum = sum + 2;
    }
    printf("%d", sum);
    return 0;
}