#include<stdio.h>
void main()
{
int n,sum=0,i;
printf("Enter a number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum:%d",sum);
}
