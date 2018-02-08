#include<stdio.h>
void main()
{
char s[50],s1[50];
int i=0,j=0;
printf("\nEnter string");
scanf("%s",s);
while(s[i]!='\0')
{
if((s[i]>=0)&&(s[i]<=9))
{
s1[j]=s[i];
j++;
i++;
}
}
printf("\nNumbers:%s",s1);
}
