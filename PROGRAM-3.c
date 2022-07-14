#include <stdio.h>
int main()
{
int num,temp=0;
printf("eneter the num ");
scanf("%d",&num);
if(num<=999)
{
while(num>0)
{
    temp=temp*10+num%10;
    num=num/10;
}
}
printf("reverse the num %d",temp);
}
