#include<stdio.h>
#include<math.h>
void main()
{
int a,b,pow=1,i;
printf("Enter a number and its power");
scanf("%d%d",&a,&b);
for(i=1;i<=b;i++)
{
    pow=pow*a;
}
printf("power is: %d",pow);
}
