#include<stdio.h>
void main()
{
int i1,i2,sum=0,a=0,b=0;
printf("\n Enter 2 intervals");
scanf("%d%d",&i1,&i2);
printf("\nAmstrong numbers");
for(a=i1;a<=i2;a++)
{
b=a;
while(a!=0)
{
r=a%10;
sum=sum+(r*r*r);
a=a/10;
}
if(b==sum)
{
printf("%d",b);
}
else
{
break;
}
}
}
