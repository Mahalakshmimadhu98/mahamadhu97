
#include <stdio.h>
#include<string.h>
int main()
{
    char s[20],s1[20];
    int i=0,flag=0,j=0,l;
    printf("\nEnter a string:");
    gets(s);
    l=strlen(s);
    while(i<l)
    {
     if(s[i]!=' ')
     {
         s1[j]=s[i];
         j++;
         
     }
     else
     {
         s1[j]=s[i+1];
         j++;
         i++;
     }
     i++;
    }
    s1[j]='\0';
   /* while(s[j]!='\0')
    {
        s[j]=s[j+1];
    }*/
    printf("\nString after removal : %s",s1);
    
      return 0;
}
