#include<stdio.h>
int main()
{
char s[30];
int i=0,j=0;
printf("\nEnter a string");
scanf("%s",&s);
printf("\n3rd charecters:%c",s[0]);

while(s[i]!='\0')
{
    j=j+3;
    printf("%c",s[j]);
    i++;
}

return 0;
}
