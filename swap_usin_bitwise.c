#include<stdio.h>
void main()
{
int a,b;
printf("Enter 2 numbers");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("\n swapped numbers%d\t%d",a,b);
}
