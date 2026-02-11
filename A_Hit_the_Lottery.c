#include <stdio.h>
int main()
{
    long long n;
    scanf("%lld", &n);
    long long count, count1, count2, count3, count4, remain = 0, real = n;
    count1 = n / 100;
    n = n % 100;
    count2 = n / 20;
    n = n % 20;
    count3 = n / 10;
    n = n % 10;
    count4 = n / 5;
    n = n % 5;
    count = count1 + count2 + count3 + count4 + n;
    printf("%lld", count);
    return 0;
}