#include<stdio.h>
#include<conio.h>
void main()
{
int a;clrscr();
printf("Enter a number");
scanf("%d",&a);
if(a>0)
{
printf("number is positive ");
}
else if(a<0)
{
printf(("number is negative");
}
else if(a==0){
printf("num is zero");
}
else
{
printf("try again");
}
getch();
}
