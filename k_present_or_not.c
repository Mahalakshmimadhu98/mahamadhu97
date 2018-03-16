#include<stdio.h>
int main()
{
int a[20],i,j,n,temp,k,flag=0;
printf("enter number of elements in array");
scanf("%d",&n);
printf("Enter an array");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\nEnter k value");
scanf("%d",&k);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
for(i=0;i<n;i++)
{
    if(a[i]==k)
    {
        flag=1;
    }
}
if(flag==1)
{
    printf("\nYes");
    
}
else
{
    printf("\nNo");
}
return 0;
}
