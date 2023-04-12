#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter the last natural number you want the sum of.\n");
    scanf("%d", &n);
    /*runs in linear time
    for (int i = 1; i <= n; i++)
    {
        sum +=i;
    }*/
    // runs in constant time
    sum = (n * n + n) / 2;
    printf("sum of first %d natural number  is: %d.\n", n, sum);
    return 0;
}