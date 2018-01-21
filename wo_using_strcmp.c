#include<stdio.h>
#include<string.h>
void main()
{
int i=0,j=0,n=0,k;
char st1[20],st2[20];
printf("\n Enter 2 strings");
scanf("%s%s",st1,st2);
i=strlen(st1);
j=strlen(st2);
if(i>j)
{
n=i;
}
else
{
n=j;
}
for(k=0;k<n;k++)
{
if(st1[k]>st2[k])
{
printf("Greater string %s",st1);
}
else if(st1[k]==st2[k])
{
printf("Equal:%s",st1);
}
else
{
printf("Greater string %s",st2);
}
}
