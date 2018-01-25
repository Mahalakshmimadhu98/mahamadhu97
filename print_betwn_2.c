#include<stdio.h>
void main()
{
int a,b,c,i,flag=0;
printf("\n Enter 3 number");
scanf("%d%d%d",&a,&b,&c);
for(i=b;i<c;i++)
{
if(i==a)
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
printf("\n No");
}
}
