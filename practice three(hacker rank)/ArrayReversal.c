// #include <string.h>
// #include <math.h>
#include <stdlib.h>
#include <stdio.h>


int main()
{
    int num, *arr;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for (int i = 0; i < num; i++)
    {
        scanf("%d",arr + i);
    }
    for (int i = num-1; i >= 0; i--)
    {
        printf("%d\n", *(arr + i));
    }
    
    return 0;
}