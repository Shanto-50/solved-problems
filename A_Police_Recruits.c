#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int officer = 0, untreated = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] == -1)
        {
            if (officer > 0)
                officer--;
            else
                untreated++;
        }
        else
            officer = officer + arr[i];
    }
    printf("%d", untreated);
    return 0;
}