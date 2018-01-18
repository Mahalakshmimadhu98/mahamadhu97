#include<stdio.h>
void main()
{
char p[100];
int i=0,count=0;
printf("\n Enter a String");
while(p[i]!='\0')
{
scanf("%s",&p[i]);
i++;
}
while(p[i]!='\0')
{
if((p[i]>=0)||(p[i]<=9)
{
++count;
}
}
printf("\n No.of.numeric characters %d",count);
}
