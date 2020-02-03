#include <stdio.h>
#define size 10

int main()
{
    int arr[size];
    int i, n, sum=0;
    float avg;
    
    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }


    printf("Sum of all elements of array = %d\n", sum);
    
    avg = sum/n;
    
    printf("Average of all elements of array = %f\n", avg);
    return 0;
}
