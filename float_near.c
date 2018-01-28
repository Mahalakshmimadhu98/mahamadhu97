#include<stdio.h>
void main()
{
float num,r;
printf("\n Enter a number");
scanf("%f",&num);
r=num+0.5;
if(r>num+1)
{
printf("Rounded num:%d",num+1);
}
else
{
printf("Rounded num:%d",num);
}
}
