#include <stdio.h>

int retunrMax(int array[],int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]>max)
        {
            max = array[i];
        }
        
    }
    return max;
}
int main()
{
    int arr[] = {1,12,3,54,5,607,134};
    int max  = retunrMax(arr,7);
    printf("The maximum element in this array is %d\n", max);
    return 0;
}