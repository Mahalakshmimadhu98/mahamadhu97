#include<stdio.h>
void main()
{
char a;
printf("Enter a character");
scanf("%c",&a);
switch(a)
{
case 'q':exit(1);
         break;
case 'Q':exit(1);
         break;
default :printf("Try again")      ;
         break;
}
}
