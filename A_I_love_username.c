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
    int min = arr[0];
    int max = arr[0];
    int amazing = 0;
    for (int k = 1; k < n; k++)
    {
        if (arr[k] > max)
        {
            amazing++;
            max = arr[k];
        }
        else if (arr[k] < min)
        {
            amazing++;
            min = arr[k];
        }
    }
    printf("%d", amazing);
    return 0;
}