#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

int max_of_four(int a, int b, int c,int d)
{
    return (a>b && a>c && a>d) ? a :(b>c && b>d) ? b : (c>d) ? c : d;
    /*
    if (a>b && a>c && a>d)
    {
        return a;
    }
    else if (b>c && b>d)
    {
        return b;
    }
    else if (c>d)
    {
        return c;
    }
    else
    {
        return d;
    }
    */
    
}

int main()
{
    int a,b,c,d;
    printf("Enter the four numbers:\n");
    scanf("%d %d %d %d", &a,&b,&c,&d);
    int ans = max_of_four(a,b,c,d);
    printf("The greatest number of the four is %d\n", ans);
    return 0;
}