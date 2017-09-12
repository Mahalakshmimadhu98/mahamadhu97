#include<stdio.h>
int main()
{
int a[20],b[20],i,j,n,temp;
printf("enter number of elements in array");
scanf("%d",&n);
printf("Enter an array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
a[i]=b[i];
}
for(i=0;i<n;i++)
{
for(j=i;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
for(i=0;i<n;i++)
{
if(a[i]==b[i])
{
}
}
printf("given array is in sorted order");
return 0;
}

