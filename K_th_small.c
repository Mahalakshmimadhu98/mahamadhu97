#include<stdio.h>
void main()
{
int a,b,c[20],i,flag=0,d[20],j=0,t,n;
printf("\nEnter a & b");
scanf("%d%d",&n,&b);
for(i=0;i<n;i++)
{
scanf("%d",&c[i]);
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(c[i]>c[j])
{
t=c[i];
c[i]=c[j];
c[j]=t;
}
}
}
printf("%d",c[b-1]);
}
