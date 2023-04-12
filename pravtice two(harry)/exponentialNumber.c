#include <stdio.h>

int main()
{
    int m = 2;
    int n = 5;
    long long int val = 1;
    for (int i = 0; i < n; i++)
    {
        val = val * m;
    }
    printf("The value of %d to the power of %d id %lld\n", m,n,val);
    
    return 0;
}