#include<stdio.h>
int main()
{
    int day1,month1,year1,day2,month2,year2,m,n,o,p;
    char a;
    printf("Enter present date in dd/mm/yyyy format : ");
    scanf("%d%c%d%c%d",&day1,&a,&month1,&a,&year1);
    printf("\nEnter your date of birth in dd/mm/yyyy: ");
    scanf("%d%c%d%c%d",&day2,&a,&month2,&a,&year2);
    printf("\nYour present age is: ");
    m=day1-day2;
    n=month1-month2;
    o=year1-year2;
    p=m;
    if(m<0)
    {
        m=31+m;
    }
    else
    m=day1-day2;
    if(n<=0)
    { if(p<0)
      { n=11+n;
        o=o-1;
      }
      if(p>0)
      { 
          o=year1-year2-1;
        n=n+12;
      }
    }
    else
    n=month1-month2;
    printf("%d Years %d Months %d Days",o,n,m);
    return 0;
}

