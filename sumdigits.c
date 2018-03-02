#include<stdio.h>
void main()
{
    int a,sum=0,r;
    printf("\nEnter a number");
    scanf("%d",&a);
    while(a!=0)
    {
        r=a%10;
        sum=sum+(r*r);
        a=a/10;
    }
    printf("\nsum of digits: %d",sum);
}
