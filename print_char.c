#include<stdio.h>
void main()
{
char stg[30];
int a=0,i;
printf("\n enter a string and an integer");
scanf("%s%d",stg,a);
for(i=0;i<a;i++)
{
printf("%c",stg[i]);
}
}
