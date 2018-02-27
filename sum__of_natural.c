#include<stdio.h>
void main()
{
int k,sum=0,i;
printf("Enter k value");
scanf("%d",&k);
for(i=1;i<=k;i++)
{
sum=sum+i;
}
printf("sum of %d natural numbers:%d",k,sum);
}
