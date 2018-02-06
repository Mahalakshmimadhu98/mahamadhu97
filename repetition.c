#include<stdio.h>
void main()
{
int a,b,c[20],i,flag=0;
printf("\nEnter n & k");
scanf("%d%d",&a,&b);
for(i=0;i<a;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<a;i++)
{
if(c[i]==b)
{
flag++;
}
}
printf("%d",flag);
}
