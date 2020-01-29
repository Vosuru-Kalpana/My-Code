#include<stdio.h>
int main()
{
	int a,sum=0,count=0;
	float avg;
	scanf("%d",&a);
	while(a!=-1)
	{
		count=count+1;
		sum=sum+a;
		avg=sum/count;
		printf("%f",avg);
		scanf("%d",&a);
	}
}
