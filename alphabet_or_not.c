#include<stdio.h>
void main()
{
char a;
printf("\n Enter a character");
scanf("%c",&a);
if((a>='a')||(a<='z')||(a<='A')||(a>='Z'))
{
printf("\nAlphabet");
}
else
{
printf("\nNo");
}
}
