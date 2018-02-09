#include<stdio.h>
int main()
{
int r,a,rev=0;
printf("Enter an integer");
scanf("%d",&a);
while(a!=0)
{
r=a%10;
rev=rev*10+r;
a=a/10;
}
printf("Reversed integer:%d",rev);
return 0;
}
