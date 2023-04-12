// Maintain the cout of the digits from 0 to 9.
// string = a11472o5t6
// Digit= 0 1 2 3 4 5 6 7 8 9
// count= 0 2 1 0 1 1 1 1 0 0

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%s", s);

    s = realloc(s, strlen(s) + 1);
    int k;
    int a[10];

    for (int i = 0; i < 10; i++)
    {
        a[i] = 0;
    }
    for (int i = 0; i < strlen(s); i++)
    {
        k = s[i] - 48;
        if (k >= 0 && k < 10)
        {
            a[k]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}