#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int flag = 0;
    for (int a = 1; a <= n; a++)
    {
        int j;
        for (j = 0; j < n; j++)
        {
            if (a == arr[j])
            {
                printf("%d ", j + 1);
                break;
            }
        }
    }
    return 0;
}