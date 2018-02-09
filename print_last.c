#include<stdio.h>
#include<string.h>
int main()
{
int n,i,j,l=0,t=0;
char a[30];
printf("\nEnter a string:");
scanf("%s",a);
printf("\nEnter n value");
scanf("%d",&n);
l=strlen(a);
for(i=0;i<l;i++)
{
    for(j=i+1;j<l;j++)
    {
        if(a[i]>a[j])
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
printf("last %d  number:%c",n,a[l-n]);
return 0;
}
