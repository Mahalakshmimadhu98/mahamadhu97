#include<stdio.h>
#include<math.h>
void main()
{
int n,k,i,flag=0,pow=1;
printf("\nEnter 2 numbers");
scanf("%d%d",&n,&k);
for(i=1;i<=n;i++)
{
    pow=pow*k;
if(pow==n)
{
    flag=1;
}
}

if(flag==1)
{
printf("\nYes");
}
else
{
    printf("\nNo");
}
}
