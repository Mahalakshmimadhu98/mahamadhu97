#include<stdio.h>
void main()
{
int num1,num2,i;
printf("Enter the intervals\n");
scanf("%d%d",&num1,&num2);
printf("Odd numbers are:\n");
for(i=num1+1;i<num2;i++)
{
if((i%2)!=0)
{
printf("%d\n",&i);
}
else
{
break;
}
}
}
