#include<stdio.h>
void main()
{
int i,a,b;
printf("Enter 2 intervals");
scanf("%d%d",&a,&b);
printf("even numbers are:");
for(i=a+1;i<b;i++)
{
if(i%2)==0)
{
printf("%d",i);
}
else
{
break;
}
}
}
