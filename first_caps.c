#include<stdio.h>
#include<string.h>
void main()
{
    char st[50];
    int i=0;
    printf("\nEnter string:");
    gets(st);
    st[0]=st[0]-32;
    while(st[i]!='\0')
    {
        if(st[i]==' ')
        {
            st[i+1]=st[i+1]-32;
        }
        i++;
    }
    printf("\nFinal string: %s",st);
}
