
#include <stdio.h>

int main()
{
   char s1[30];
   int i=0;
   printf("\nEnter a string");
   scanf("%s",&s1);
   while(s1[i]!='\0')
   {
       if(s1[i]>=97)
       {
           s1[i]=s1[i]-32;
       }
       else
       {
           s1[i]=s1[i]+32;
       }
       i++;
   }
   s1[i]='\0';
 printf("\nString: %s",s1);
    return 0;
}
