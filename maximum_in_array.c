#include<stdio.h>
void main()
{
int a[30],n,max=0,i;
printf("\n Enter no.of.elements");
scanf("%d",&n);
printf("\n Enter the array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
for(i=0;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
}
}
printf("The biggest num is: %d",max);
}
