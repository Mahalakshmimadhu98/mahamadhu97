#include<stdio.h>
void main()
{
int n,a[30],count=1,s=0,r;
printf("\n Enter a number");
scanf("%d",&n);
s=n;
while(n!=0)
{
n=n/10;
count++;
}
for(i=count-1;i>=0;i--)
{
while(s!=0)
{
r=s%10;
a[i]=r;
s=s/10;
}
}
for(i=0;i<count;i++)
{
printf("%d",a[i]);
}
}
