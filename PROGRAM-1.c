#include <stdio.h>
int main()
{
	int a[8],i,sum=0,avg,s;
	float b[7],sum1=0,avg1;
	float s1;
	for(i=0;i<8;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		avg=sum/8;
	}
	printf("integers sum %d and avg %d\n",sum,avg);
	for(i=0;i<7;i++)
	{
		scanf("%f",&b[i]);
		sum1=sum1+b[i];
		avg1=sum/7;
	}
	printf("float sum %f and avg %f\n",sum1,avg1);
	s=sum/sum1;
	s1=avg/avg1;
	printf("div sum int and float %d\n",s);
	printf("div avg int and float %d\n",s1);
	//printf("%f=%d\n",b[i]);
}
