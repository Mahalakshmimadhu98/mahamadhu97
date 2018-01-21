#include<stdio.h>
void main()
{
int a,b,temp=0;
printf("\n Enter a,b");
scanf("%d%d",&a,&b);
temp=a;
a=b;
b=temp;
printf("swap of a,b %d %d",a,b);
}
