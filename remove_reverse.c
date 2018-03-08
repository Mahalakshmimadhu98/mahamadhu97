
#include <stdio.h>
#include<string.h>
int main()
{
    char s1[30],s2[30],s3[30];
    int i=0,j=0,k,l,m;
    printf("\nEnter a string");
    scanf("%s",s1);
   
    while(s1[i]!='\0')
    {
         k=((s1[i]!='a')&&(s1[i]!='e')&&(s1[i]!='i')&&(s1[i]!='o')&&(s1[i]!='u'));
        if(k==1)
        {
            s2[j]=s1[i];
            j++;
        }
        i++;
    }
    s2[j]='\0';
    l=strlen(s2);
    m=0;
    for(i=l-1;i>=0;i--)
    {
       s3[m] =s2[i];
       m++;
    }
    s3[m]='\0';
    printf("\nString after removal & reverse : %s",s3);
    return 0;
}
