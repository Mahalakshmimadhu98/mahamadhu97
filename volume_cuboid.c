#include<stdio.h>
void main()
{
    float l,b,h,vol=0;
    printf("\nEnter length,breadth,height:");
    scanf("%f%f%f",&l,&b,&h);
    vol=l*b*h;
    printf("Volume:%.2f",vol);
    
}
