#include<stdio.h>
void main()
{
char st[30],c;
int i,j;
printf("\nEnter a number");
gets(st);
for(i=0;st[i]!='\0';i++)
{
for(j=i+1;st[j]!='\0';j++)
{
if(st[i]>st[j])
{
c=st[i];
st[i]=st[j];
st[j]=c;
}
}
}
  printf("%s",st);
  }
