#include<stdio.h>
int main()
{
int a[30];
int i,n,k,count=0;
printf("\nEnter n value");
scanf("%d",&n);
printf("\nEnter %d elements:",n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("\nEnter k value");
scanf("%d",&k);
for(i=0;i<n;i++)
{
    if(a[i]==k)
    {
        count++;
    }
}
printf("\nNumber of occurances of %d is :%d",k,count);
return 0;
}
