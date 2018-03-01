#include<stdio.h>
void main()
{
char s1[20],s2[20];
int i=0,count=0;
printf("\nEnter 2 strings:");
gets(s1);
gets(s2);
while(s1[i]!='\0')
{
    if(s1[i]!=s2[i])
    {
        count++;
    }
    i++;
}
if(count==1)
{
    printf("\nYes strings are with 1 change");
    
}
else
{
    printf("No strings are with more than 1 change");
}
}
