
#include <stdio.h>
#include<string.h>
#include<conio.h>
int main ()
{
  char s[30],s1[30];
  int count[30],i=0,j=0,k,n,max;clrscr();
  printf("\nEnter a string");
  gets(s);
  while(s[i]!='\0')
  {
      if(s[i]!=' ')
      {
      s1[j]=s[i];
      j++;
      }
      i++;
  }
  s1[j]='\0';
  n=strlen(s1);
  for(i=0;i<n;i++)
  {
      count[i]=1;
  }
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(s1[i]==s1[j])
          {
            count[i]++;  
          }
      }
  }
  max=count[0];
  for(i=1;i<n;i++)
  {
   if(count[i]>max) 
   {
       max=count[i];
       k=i;
   }
  }  
  printf("\nMost repeated letter : %c",s1[k]);
  getch();
  return 0;
}
