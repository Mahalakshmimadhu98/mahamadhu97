#include<stdio.h>
#include<string.h>
void main()
{
char s1[30],s2[30],t;
int i=0;
printf("\nEnter a string:");
scanf("%s",s1);
while(s1[i]!='\0')
{
    t=s1[i];
    s1[i]=s1[i+1];
    s1[i+1]=t;
    i=i+2;
}
printf("\nSwapped string:%s",s1);
}
