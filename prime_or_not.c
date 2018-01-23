#include <stdio.h>

int main()
{
    int n,i;
    printf("\n Enter a number");
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            printf("\nNo");
        }
        else
        {
            printf("\nYes");
        }
    }

    return 0;
}
