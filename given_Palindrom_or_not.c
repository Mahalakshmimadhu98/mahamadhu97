#include<stdio.h>
#include<string.h>
void main()
{
char st1[30],st2[30];
printf("\n Enter a string");
scanf("%s",st1);
st2=strrev(st1);
if(st1==st2)
{
printf("\nYes");
}
else
{
printf("\nNo");
}
}
