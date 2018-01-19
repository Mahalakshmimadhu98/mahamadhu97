#include<stdio.h>
void main()
{
int i,j,a[20],n,t=0;
printf("enter no.of.elements");
scanf("%d",&n);
printf("\n Enter array elements");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
t=a[i];
a[i]=a[j];
a[j]=t;
}
}
}
printf("largest & smallest: %d %d",a[0],a[n-1]);
}
