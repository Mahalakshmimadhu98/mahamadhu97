#include<stdio.h>
#include<math.h>
void main()
{
int n,i,flag=0;
printf("\nEnter a number");
scanf("%d",&n);
for(i=1;i<(n/2);i++)
{
if(n==(i*i))
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
