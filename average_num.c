#include<stdio.h>
void main()
{
int n;
float i,sum=0,avg=0;
printf("\n enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
avg=sum/n;
printf("\n Average: %d",avg);
}
