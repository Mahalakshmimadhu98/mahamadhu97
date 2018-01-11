#include<stdio.h>
void main()
{
char para[50];
int i,n,count=0;
printf("\n Enter no.of letters");
scanf("%d",&n);
printf("\n Enter a paragraph");
for(i=0;i<n;i++)
{
scanf("%c",&para[i]);
}
i=0;
while(para[i]!='\0')
{
if(para[i]==".")
{

