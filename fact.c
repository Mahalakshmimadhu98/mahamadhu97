#include<stdio,h>
void main()
{
int a,i,fact1=1;
printf("Enter a value");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
fact1=fact1*i;
}
printf("factorial of a is:%d",fact1);
}

