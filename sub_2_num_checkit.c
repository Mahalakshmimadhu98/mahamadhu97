#include<stdio.h>
void main()
{
int n1,n2,sub=0;
printf("\n Enter 2 numbers");
scanf("%d%d",&n1,&n2);
sub=n1-n2;
if(sub%2==0)
{
printf("\n Even");
}
else
{
printf("\n Odd");
}
}
