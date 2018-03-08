
#include <stdio.h>
#include<string.h>
int main()
{
    int l,r,i,a[200],j=0;
    printf("\nEnter L and R value");
    scanf("%d%d",&l,&r);
    for(i=1;i<=(l*r);i++)
    {
        if((i%l==0)&&(i%r==0))
        {
           a[j]=i; 
           j++;
        }
    }
    printf("\nSmallest number :%d",a[0]);
    return 0;
}
