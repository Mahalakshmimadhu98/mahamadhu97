#include<stdio.h>

void main()
{
int n,k,i,j,l,a[20],b[20],m;
printf("\nEnter n,k value");
scanf("%d%d",&n,&k);
printf("\nEnter %d elements",n);

for(i=1;i<=n;i++)
{
    scanf("%d",&a[i]);
}
    i=1;
for(j=k+1;j<=n;j++)
{
    b[i]=a[j];
    i++;
}
m=n-k+1;
for(l=1;l<=k;l++)
{
    b[m]=a[l];
    m++;
}
printf("After %d shift:",k);
for(i=1;i<=n;i++)
{
    printf("%d\t",b[i]);
}
}
