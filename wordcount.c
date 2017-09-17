#include<stdio.h>
#inlcude<string.h>
void main()
{
char s[200],i,count=1,j;
printf("\n Enter the sentence");
scanf("%s",&s);
i=strlen(s);
for(j=0;j<i;j++)
{
if(s[j]==" ")
{
count=count+1;
}
}
printf("no.of.words: %d",count);
}

