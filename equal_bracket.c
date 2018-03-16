
#include <stdio.h>
#include<string.h>
int main()
{
    char s1[20];
    int i=0,count1=0,count2=0,k;
    printf("\nEnter a strings consists only '(' and ')'");
    gets(s1);
    while(s1[i]!='\0')
    {
        if(s1[i]=='(')
        {
            count1++;
        }
        else
        {
            count2++;
        }
        i++;
    }
    if(count1==count2)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
    
     return 0;
}
