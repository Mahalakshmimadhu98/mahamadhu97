#include<stdio.h>
void main()
{
int n,i,flag=0;
printf("\n Enter a number");
scanf("%d",&n);
for(i=-32768;i<=32767;i++)
{
    if(n==i)
    {
        flag=1;
    }
}
if(flag==1)
{
    printf("\nINT");
}
else
{
    printf("\nLONG");
}
}
