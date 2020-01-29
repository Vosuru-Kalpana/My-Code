#include<stdio.h>
int main()
{
	int a,b,c;
	float avg;
	scanf("%d%d%d",&a,&b,&c);
	while(a!=-1 && b!=-1 && c!=-1)
	{
		avg=(a+b+c)/3;
		printf("%f",avg);
		a=b;
		b=c;
		scanf("%d",&c);
	}
}

