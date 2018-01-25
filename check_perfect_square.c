#include<stdio.h>
#include<math.h>
void main()
{
int n,s;
printf("\nEnter a number");
scanf("%d",&n);
s=sqrt(n);
if(s==(n*n))
{
printf("\nYes");
}
else
{
printf("\nNo");
}
}
