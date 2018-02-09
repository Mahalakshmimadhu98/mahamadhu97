#include<stdio.h>
int main()
{
int n,prod=1,a[30],i;
printf("\nEnter n value");
scanf("%d",&n);
printf("\nEnter %d numbers:",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    prod=prod*a[i];
}
printf("\nProduct:%d",prod);
return 0;
}
