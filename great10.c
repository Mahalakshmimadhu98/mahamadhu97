#include<stdio.h>
void main()
{
int a[15],i,big;
printf("Enter 10 numbers");
for(i=1;i<=10;i++)
{
scanf("%d",&a[i]);
}
  big=a[0];
for(i=0;i<10;i++)
{
if(a[i]>big)
{
  big=a[i];
}
}
  printf("Biggest %d",big);
}
