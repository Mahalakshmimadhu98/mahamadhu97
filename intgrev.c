#include<stdio.h>
int main()
{
int r,n,rev=0;
printf("Enter an integer");
scanf("%d",&n);
while(n!=0)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("Reversed integer:%d",rev);
return 0;
}
