#include<stdio.h>
void main()
{
int a[15],i,sum=0;
printf("Enter 10 numbers");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
sum=sum+a[i];
}
printf("sum is: %d",sum);
}
