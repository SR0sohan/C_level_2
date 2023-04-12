// #include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]",s);
    s = realloc(s, strlen(s) + 1);
    printf("The token is:\n");
    int l = strlen(s);

    for (int i = 0; i < l; i++)
    {
        if (s[i] == ' ')
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }   
    }
    printf("\n");
    free(s);
    return 0;
}