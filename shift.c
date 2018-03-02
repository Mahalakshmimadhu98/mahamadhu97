#include<stdio.h>

void main()
{
int n,k,i,j,l,a[20],b[20],m;
printf("\nEnter n,k value");
scanf("%d%d",&n,&k);
printf("\nEnter %d elements",n);

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    b[i]=a[i];
}
i=0;
for(j=k;j<n;j++)
{
    a[j]=b[i];
    i++;
}
m=k;
for(l=0;l<m;l++)
{
    a[l]=b[k];
    k++;
}
printf("After %d shift:",k);
for(i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
}
