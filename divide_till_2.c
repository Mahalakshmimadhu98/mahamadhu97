#include<stdio.h>
void main()
{
    int n;
    printf("\nEnter a number");
    scanf("%d",&n);
    while(n%2==0)
    {
        n=n/2;
        printf("\nnumbers:%d",n);
    }
}
