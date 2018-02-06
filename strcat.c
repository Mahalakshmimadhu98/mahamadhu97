#include<stdio.h>
#include<string.h>
void main()
{
char a[20],b[20],c[20];
printf("\nEnter a & b");
scanf("%s%s",a,b);
strcat(a,b);
printf("%s",a);
}
