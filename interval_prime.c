#include<stdio.h>
void main()
{
int a,b,i,flag=0,j,count=0;
printf("Enter 2 intervals");
scanf("%d%d",&a,&b);
printf("Prime numbers");
for(j=a;j<=b;j++)
{
for(i=2;i<=(j/2);i++)
{
if(j%i==0)
{
flag=1;
}
else
{
    flag=0;
}
}

if(flag==0)
{
count++;
}
}
printf("\nTotal: %d",count);
}
