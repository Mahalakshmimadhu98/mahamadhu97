#include<stdio.h>
#include<string.h>
void main()
{
char st[20];
int i,j,k,flag=0;
printf("\nEnter a string");
scanf("%s",st);
printf("\nIsogram or not");
k=strlen(st);
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(st[i]==st[j])
{
flag=1;
}
}
}
if(flag!=1)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
}
