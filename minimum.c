#include<stdio.h>
void main()
{
int a[20],i,n,min=0;
printf("\n Enter no.of.elements");
scanf("%d",&n);
printf("\n Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]<min)
{
min=a[i];
}
}
printf("\n minimum element %d",min);
}
