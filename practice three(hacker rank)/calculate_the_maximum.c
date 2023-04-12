// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
    int M1 = 0, M2 = 0, M3 = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int and = i & j;
            if (and < k && M1 < and)
            {
                M1 = and;
            }

            int or = i | j;
            if (or < k && M2 < or)
            {
                M2 = or ;
            }

            int xor = i ^ j;
            if (xor < k && M3 < xor)
            {
                M3 = xor;
            }
        }
    }
    printf("The out-put is:\n");
    printf("%d\n", M1);
    printf("%d\n", M2);
    printf("%d\n", M3);
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}