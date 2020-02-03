#include <stdio.h>
 
#define row 10
#define col 10
 
int main()
{
    int matrix[row][col];
    int i,j,r,c;
     
    printf("Enter number of Rows :");
    scanf("%d",&r);
    printf("Enter number of Cols :");
    scanf("%d",&c);
 
    printf("\nEnter matrix elements :\n");
    for(i=0;i< r;i++)
    {
        for(j=0;j< c;j++)
        {
            printf("Enter element [%d,%d] : ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
 
    if(r==c)
    {
            
            for(i=0;i< c;i++)
            {
                for(j=0;j< r;j++)
                {
 
                    if(i==j)
                        printf("%d\t",matrix[j][i]);    
                    else
                        printf("\t");   
                }
                printf("\n");   
            }
    }
    else
    {
        printf("\nMatrix is not a Square Matrix.");
    }
    return 0;   
}
