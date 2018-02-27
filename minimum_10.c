#include<stdio.h>
void main()
{
int c[20],i,min=0;
printf("\n Enter 10 elements");
for(i=0;i<10;i++)
{
scanf("%d",&c[i]);
}
min=c[0];
for(i=1;i<10;i++)
{
if(c[i]<min)
{
min=c[i];
}
}
printf("\n minimum element %d",min);
}
