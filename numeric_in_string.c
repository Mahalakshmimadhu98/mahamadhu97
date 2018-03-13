
#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int i=0,flag=0;
    printf("\nEnter a string:");
    gets(s);
    while(s[i]!='\0')
    {
        if((s[i]>='a')&&(s[i]<='z'))
        {
            flag=1;
        }
        i++;
    }
    if(flag==0)
    {
        printf("\nYes");
    }
    else
    {
     printf("\nNo");
    }
      return 0;
}
