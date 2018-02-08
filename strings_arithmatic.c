#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char s[50],s1[50],s2[50],d;
int i=0,j=0,k=0,l=0,a=0,b=0;
printf("\nEnter a string");
scanf("%s",s);
l=strlen(s);
while(i<(l/2))
{
s1[j]=s[i];
i++;
j++;
}
i=0;
while(i<l)
{
s2[k]=s[i];
i++;
k++;
}
a=atoi(s1);
b=atoi(s2);
d=l/2;
switch(d)
{
case '+':printf("\n%d%c%d=%d",a,d,b,a+b); 
         break;
case '-':printf("\n%d%c%d=%d",a,d,b,a-b);
         break;
case '*':printf("\n%d%c%d=%d",a,d,b,a*b);
         break;
case '/':printf("\n%d%c%d=%d",a,d,b,a/b);
         break;
case '%':printf("\n%d%c%d=%d",a,d,b,a%b);
         break;
default :printf("\nTry again");
         break;
         }
         }
