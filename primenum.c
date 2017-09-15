#include<stdio.h>
void main()
{
int i,n,fg=0;
printf("Enter a number");
scanf("%d",&n);
for(i=2;i<=n/2;++i)
{
if(n%i==0)
{
fg=1;
break;
}
}
if(fg==0)
{
printf("\n prime number");
}
else
{
printf("\n Not a prime number");
}
}
