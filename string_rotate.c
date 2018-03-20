#include<stdio.h>
#include<string.h>
void main()
{
int n,k,i,j,l,m;
char s1[30],s2[30];
printf("\nEnter a string");
scanf("%s",s1);
n=strlen(s1);
printf("\nEnter no.of rotation");
scanf("%d",&k);
    i=0;
for(j=k;j<n;j++)
{
    s2[i]=s1[j];
    i++;
}

for(l=0;l<k;l++)
{
    s2[i]=s1[l];
    i++;
}
s2[i]='\0';
printf("After %d rotation:",k);
printf("\nString: %s",s2);
}
