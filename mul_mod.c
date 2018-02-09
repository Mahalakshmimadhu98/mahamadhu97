#include<stdio.h>
int main()
{
int a,b,c;
printf("\nEnter 3 numbers:");
scanf("%d%d%d",&a,&b,&c);
printf("\n(%d*%d) mod %d=%d",a,b,c,((a*b)%c));

return 0;
}
