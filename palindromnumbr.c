#include<stdio.h>
void main()
{
int r,n,rev=0;
printf("Enter a number");
scanf("%d",&n);
while(n!=0)
{
r=a%10;
rev=rev*10+r;
n=n/10;
}
if(n==rev)
{
printf("palindrome");
}
else
{
printf("Not palindrome");
}
}
