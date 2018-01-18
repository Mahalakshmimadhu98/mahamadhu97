#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
char s1,s2;
int i,j;
printf("enter 2 strings");
gets(s1);
gets(s2);
for(i=0;s1[i]!='\0';i++)
{
s1[i]++;
}
for(j=i;s2[j]!='\0';j++)
{
s1[j]=s2[j];
}
printf("concatenated string: %s",s1);
}
