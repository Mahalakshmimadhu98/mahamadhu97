#include<stdio.h>
#include<string.h>
void main()
{
int i=0,j=0,count=1;
char s1[30];
printf("\nEnter a string\n");
scanf("%s",s1);
i=strlen(s1);
for(j=0;j<i;j++)
{
if((s1[i]==0)||(s1[i]==1))
{
count++;
}
}
if(count==i)
{
printf("Yes");
}
else
{
printf("No");
}
}

