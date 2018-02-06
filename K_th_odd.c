#include<stdio.h>
void main()
{
int a,b,c[20],i,flag=0,d[20],j=0;
printf("\nEnter n & k");
scanf("%d%d",&a,&b);
for(i=0;i<a;i++)
{
scanf("%d",&c[i]);
}
for(i=0;i<a;i++)
{
if(c[i]%2!=0)
{
d[j]=c[i];
j++;
}
}
printf("%d",d[b-1]);
}
