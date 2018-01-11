#include<stdio.h>
void main()
{
char a[20],i,n,count=0;
printf("\n Enter number of characters");
scanf("%d",&n);
printf("\n Enter a string");
for(i=0;i<n;i++)
{
scanf("%c",&a[i]);
}
i=0;
while(i!=n)
{
if(a[i]==" ")
{
++count;
}
i++;
}
printf("space count: %d",count);
}

