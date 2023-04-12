// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the five digit number.\n");
    scanf("%d", &n);
    int sum = 0;
    while (n > 0)
    {
        int a = n % 10;
        n = n / 10;
        sum = sum + a;
    }
    printf("The total of the five digit number is %d.\n", sum);
    return 0;
}