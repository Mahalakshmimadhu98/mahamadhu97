#include<tdio.h>
void main()
{
int n,f=0,s=1,next,i=0;
printf(" Enter a number\n");
scanf("%d",&n);
printf("%d\t%d\t",f,s);
while(i<n)
{
next=f+s;
f=s;
s=next;
i++;
printf("%d\t",next);
}
