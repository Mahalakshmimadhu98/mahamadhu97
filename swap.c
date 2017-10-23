#include<stdio.h>
void main()
{
int a,b,temp=0;
printf("Enter 2 numbers");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("Swapped numbers %d %d",a,b);
}
