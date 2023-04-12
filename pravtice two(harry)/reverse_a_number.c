#include <stdio.h>

int reverse(int num)
{
    int reverseNumber = 0, reminderNumber;
    while (num != 0)
    {
        reminderNumber = num % 10;
        reverseNumber = reverseNumber * 10 + reminderNumber;
        num = num / 10;
    }
    return reverseNumber;
}
int main()
{
    int num = 124;
    int rev = reverse(num);
    printf("The reversed number is %d\n", rev);
    return 0;
}