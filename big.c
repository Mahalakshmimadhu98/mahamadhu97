#include<stdio.h>
void main()
{
int a,b,c;
printf("\n Enter  three numbers");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{
printf("A is big");
}
else if(b>c)
{
printf("B is big");
}
else
{
printf("C is big");
}
}
