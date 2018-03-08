
#include <stdio.h>
#include<string.h>
int main()
{
    int n,i,j,flag=0;
    printf("\nEnter a number");
    scanf("%d",&n);
    if(n%2==0)
    {
       printf("\nPrime factors: 2 ");
    }
    for(i=3;i<n;i++)
    {
        if(n%i==0)
        {
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                printf("%d ",i);
            }
        }
        
    }
    return 0;
}
