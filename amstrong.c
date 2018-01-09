#include<stdio.h>
void main()
{
int num,copy=0,sum=0,r;
printf("\n Enter a number");
scanf("%d",&num);
copy=num;
while(num!=0)
{
r=num%10;
sum=sum+(r*r*r);
num=num/10;
}
if(sum==copy)
{
printf("\nAmstrong");
}
else
{
printf("\n Not Amstrong");
}
}
