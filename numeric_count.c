#include<stdio.h>
void main()
{
int a,count=1;
printf("Enter a number");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
count++;
}
printf("\n no.of.digits: %d",count);
}

