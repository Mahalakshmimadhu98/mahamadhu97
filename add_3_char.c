
#include <stdio.h>
#include<string.h>
int main()
{
   char ch[20],ch1[20];int i=0;
   printf("\nEnter a string");
   scanf("%s",ch);
   while(ch[i]!='\0')
   {
       ch1[i]=ch[i]+3;
       i++;
   }
   ch1[i]='\0';
   printf("\nSting : %s",ch1);
    return 0;
}
