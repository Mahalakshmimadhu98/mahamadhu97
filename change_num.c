#include<stdio.h>
void main()
{
int n,a[10],i,max=0,j;
printf("\nEnter no.of.elements");
scanf("%d",&n);
printf("\nEnter elements with 1 change");
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
        j=i;
    }
}
printf("\nChanged number position:%d",j+1);
}
