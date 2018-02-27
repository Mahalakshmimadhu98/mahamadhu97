#include<stdio.h>
#include<string.h>
void main()
{
    int a,d,n,sum=0,i=0;
    printf("\nEnter 3 numbers");
    scanf("%d%d%d",&a,&d,&n);
    i=((2*a)+((n-1)*d));
    sum=((n/2)*i);
    printf("\nSum of given AP: %d",sum);
    
}
