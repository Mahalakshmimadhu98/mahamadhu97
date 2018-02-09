#include<stdio.h>
void main()
{
    int a[20],n,i,sum=0;
    printf("\n enter n value");
    scanf("%d",&n);
    printf("\n enter %d numbers",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("\n sum:%d",sum);
}
