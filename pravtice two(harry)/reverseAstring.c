#include <stdio.h>

int main()
{
    char s[] = "Any word or sentence you want to reverse";
    char temp;
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    printf("The length of this string is %d.\n", len);
    for (int i = 0; i < (len - 1) / 2; i++)
    {
        temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }

    printf("The reversed string is:\n%s\n", s);
    return 0;
}