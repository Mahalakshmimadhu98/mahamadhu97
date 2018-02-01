#include<stdio.h>
#include<string.h>
void main()
{
char st[20];
int n=0,i;
printf("\nEnter a number");
scanf("%s",st);
n=strlen(st);
printf("\nOdd digits:");
for(i=0;i<n;i++)
{
if((st[i]%2)!=0)
{
printf("%c\t",st[i]);
}
}

