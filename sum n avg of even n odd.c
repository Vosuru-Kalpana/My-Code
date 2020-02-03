#include <stdio.h>
#define size 10

int main()
{
    int arr[size];
    int i, n, sum1=0,sum2=0,count1=0,count2=0;
    float avg1,avg2;
    
    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            sum1 = sum1 + arr[i];
            count1 = count1 + 1;
        }
        else
        {
            sum2 = sum2 + arr[i];
            count2 = count2 + 1;
        }
    }


    printf("Sum of all even elements of array = %d\n", sum1);
    printf("Sum of all odd elements of array=%d\n", sum2);
    
    avg1 = sum1/count1;
    avg2 = sum2/count2;
    
    printf("Avg of all even elements of array =%f", avg1);
    printf("Avg of all odd elements of array =%f", avg2);


    return 0;
}
