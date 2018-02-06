#include<stdio.h>
void main()
{
int a,co=0;
printf("\n Enter an integer");
scanf("%d",&a);
whlile(a!=0)
{
a=a/10;
++co;
}
printf("\n number of integers %d",co);
}
