#include<stdio.h>
void main()
{
int num;
printf("\n Entera number");
scanf("%d",&num);
while((num%10)!=0)
{
num=num+1;
}
printf("answer: %d",num);
}
