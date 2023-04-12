// Print the following star pattern. the number of lines in this patters should be equal to the value entered by the user. the pattern looks like this for n = 4.

// *
// **
// ***
// ****


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n.\n");
    scanf("%d", &n);

    // run the loop for n times 
    for (int i = 0; i < n; i++)
    {
        // print (i+1) stars
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}