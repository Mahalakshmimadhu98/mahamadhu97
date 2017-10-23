#include<stdio.h>
void swap(int*,int*);
void main()
{
int a,b;
printf("\n enter 2 numbers");
scanf("%d%d",&a,&b);
printf("\n before swapping %d %d",a,b);
swap(&a,&b);
}
void swap(int *i,int *j)
{
*i=*i^*j;
*j=*i^*j;
*i=*i^*j;
printf("\n after swapping %d %d",*i,*j);
}
