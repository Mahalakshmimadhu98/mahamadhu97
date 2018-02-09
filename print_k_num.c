#include<stdio.h>
void main()
{
    int n,k,a[20],i;
    printf("\nEnter n,k value");
    scanf("%d%d",&n,&k);
    printf("\nEnter %d numbers:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d number is:%d",k,a[k-1]);
}
