#include<stdio.h>
void main()
{
int a[i],i,n,j,k,temp=0;
printf("\n Enter no.of.elments");
scanf("%d",&n);
prinrtf("\n Enter the array elemnts");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
if(n%2==0)
{
printf("%d",(a[n/2]+(a[n/2]-1))/2);
}
else
{
printf("%d",a[n]/2);
}
}
