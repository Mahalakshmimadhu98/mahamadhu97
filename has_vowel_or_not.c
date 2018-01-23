#include<stdio.h>
#include<conio.h>
void main()
{
char a[30];
int i,n,flag=0,j;
char b[30]={'a','e','i','o','u'};
printf("\n enter a string");
scanf("%s",a);
n=strlen(a);
for(i=0;a[i]!='\0';i++)
{
for(j=0;b[j]!='\0';j++)
{
if(a[i]==b[j])
{
flag=1;
}
}
}
if(flag==1)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
}
