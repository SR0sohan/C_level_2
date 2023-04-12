#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void fun(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        switch (i)
        {
        case 8:
            printf("eight\n");
            break;
        case 9:
            printf("nine\n");
            break;

        default:
            if (i % 2 == 0)
            {
                printf("Even\n");
            }
            else
            {
                printf("Odd\n");
            }

            break;
        }
    }
}
int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    fun(a, b);
    return 0;
}