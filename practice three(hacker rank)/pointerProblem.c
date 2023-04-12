#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
// #include <math.h>

void update(int *a, int *b)
{
    int add, sub;
    add = *a + *b;
    sub = abs(*a - *b);
    // normal situation apply this conditional method but pointer or abs method use stdlib.h as a header file.
    // if (sub < 0)
    // {
    //     sub = -sub;
    // }
    *a = add;
    *b = sub;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);
    return 0;
}