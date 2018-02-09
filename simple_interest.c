#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
    float n,p,t,SI=0;
    printf("\nEnter p,n,t value");
    scanf("%f%f%f",&p,&n,&t);
    SI=floor((p*n*t)/100);
    printf("\nSimple interest:%.4f",SI);
}
