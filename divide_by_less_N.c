

#include <stdio.h>

int main()
{
   int n,i,flag=0;
   printf("\nEnter a number");
   scanf("%d",&n);
   for(i=2;i<n;i++)
   {
       if(n%i==0)
       {
           flag=1;
       }
   }
if(flag==1)
{
   printf("\nYes") ;
}
else
{
    printf("\nNo");
}
    return 0;
}
