#include<stdio.h>
void main()
{
int n,i,k=0;
printf("\n Enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    k=n%i;
    if(k==0)
    {
      if(i%2==0)
       {
       printf("%d\t",i);
       }
    }
}
}
