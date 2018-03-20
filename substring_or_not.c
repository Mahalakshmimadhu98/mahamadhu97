#include<stdio.h>
#include<string.h>
int main()
{
char s1[30],s2[30],s3[30];
int i=0,j=0,k,l=0;
printf("\nEnter a string");
scanf("%s",s1);
printf("\nEnter a substring");
scanf("%s",s2);
while(s1[i]!='\0')
{
    if(s1[i]==s2[l])
    {
        s3[j]=s1[i];
        j++;
        l++;
    }
    i++;
}
s3[j]='\0';
k=strcmp(s2,s3);
if(k==0)
{
    printf("\nYes it is a substring");
}
else
{
    printf("\nNo");
}
return 0;
}
