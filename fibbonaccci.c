#include<stdio.h>
void main()
{
int f=0,s=1,n=0,x;
printf("enter a number");
scanf("%d,&x");
printf("%d\t%d\t",f,s);
while(n!=x)
{
n=f+s;
f=s;
s=n;
printf("%d\t",n);
}
}
