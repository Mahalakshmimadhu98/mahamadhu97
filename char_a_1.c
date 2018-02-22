#include<stdio.h>
#include<math.h>
void main()
{
char a;
int i;
printf("\nEnter a character:");
scanf("%c",&a);

i=a;
if((a>='A')&&(a<='Z'))
{
printf("%d",i-64);
}
if((a>='a')&&(a<='z'))
{
    printf("%d",i-96);
}
}
