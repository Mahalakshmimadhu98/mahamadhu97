#include<stdio.h>
void main()
{
char st[20],st1[20];
int i=0,j=0;
printf("\nEnter a string:");
scanf("%s",st);
while(st[i]!='\0')
{
    if((st[i]>='0')&&(st[i]<='9'))
    {
        st1[j]=st[i];
        j++;
    }
    i++;
}
printf("\nNumbers in the string: %s",st1);
}
