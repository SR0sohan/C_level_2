#include <stdio.h>

int main()
{
    int n = 34;
    int isPrime = 1;
    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
        }
    }
    if (isPrime)
    {
        printf("The number %d is prime number.\n", n);
    }
    else
    {
        printf("The number %d is not a prime number.\n", n);
    }

    return 0;
}