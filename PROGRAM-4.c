#include<stdio.h>
int main()
{
	int n=204,x=n;
	int r,h,b,i;
	while(n!=0)
	{
		r=n%16;
		n=n/16;
		if(r<=0||r<=9)
			h=r+48;
		else
			h=r+55;
		printf("%c",h);
	}
	printf("\n");
	x==n;
	for(i=7;i>=0;i--)
  {
		b=(x>>i)&1;
printf("%d",b);
}
}
