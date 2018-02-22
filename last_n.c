#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,l=0,t=0;
char c[30];
printf("\nEnter a string:");
scanf("%s",c);
printf("\nEnter n value");
scanf("%d",&n);
l=strlen(c);
for(i=0;i<l;i++)
{
    for(j=i+1;j<l;j++)
    {
        if(c[i]>c[j])
        {
            t=c[i];
            c[i]=c[j];
            c[j]=t;
        }
    }
}
printf("last %d  number:%c",n,c[l-n]);
return 0;
}
