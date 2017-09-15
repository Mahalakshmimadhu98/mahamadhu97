#include<stdio.h>
void main()
{
int a,b,i,flag=0;
printf("Enter 2 intervals");
scanf("%d%d",&a,&b);
printf("Prime numbers");
for(i=2;i<b;i++)
{
if((b%i)==0)
{
flag=1;
break;
}
if(flag==0)
{
printf("%d",i);
}
else
{
break;
}
}
}
