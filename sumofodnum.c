#include<stdio.h>
void main()
{
int i,sum1=0,sum2=0,j;
for(i=1;i<=15;i++)
{
sum1=sum1+i;
}
printf("sum of 1-15: %d",sum1);
for(j=15;j<=45;j++)
{
if((j%2)!=0)
{
sum2=sum2+j;
}
}
printf("Sum of odd 15-45 %d",sum2);
}
