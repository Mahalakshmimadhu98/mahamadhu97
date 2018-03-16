#include<stdio.h>
void main()
{
int n,i,k=0,j,a,flag=0;
printf("\n Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{ 
    a=1;
    for(j=1;j<=i;j++)
    {
    a=a*2;
    }
    if(n==a)
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
