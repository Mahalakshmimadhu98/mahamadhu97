#include<stdio.h>
void main()
{
char st[30];
printf("Enter a string:\n");
scanf("%s",st);
if(((st<='a')||(st<='z'))&&((st<=0)||(st>=9)))
{
printf("yes");
}
else
{
printf("No");
}
}
