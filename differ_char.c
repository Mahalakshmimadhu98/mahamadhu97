
#include <stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    int i=0,count=0,k;
    printf("\nEnter 2 strings");
    gets(s1);
    gets(s2);
    printf("\nEnter k value");
    scanf("%d",&k);
    while(s1[i]!='\0')
    {
        if(s1[i]!=s2[i])
        {
            ++count;
        }
        i++;
    }
    if(count==k)
    {
        printf("\nYes");
        
    }
    else
    {
        printf("\nNo");
    }
    

    return 0;
}
