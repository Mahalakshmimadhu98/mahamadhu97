#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    int i=0;
    printf("\nEnter string:");
    gets(s);
    s[0]=s[0]-32;
    while(s[i]!='\0')
    {
        if(s[i]==' ')
        {
            s[i+1]=s[i+1]-32;
        }
        i++;
    }
    printf("\nFinal string: %s",s);
}
