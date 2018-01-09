#include<stdio.h>
void main()
{
int n,count=0;
printf("\n Enter an integer");
scanf("%d",&n);
whlile(n!=0)
{
n=n/10;
++count;
}
printf("\n number of integers %d",count);
}
