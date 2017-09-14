#include<stdio.h>
void main()
{
char a;
printf("enter a character");
scanf("%c",&a);
switch(a)
{
case 'a':printf("vowel a");
         break;
case 'e':printf("vowel e");
         break;
case 'i':printf("vowel i");
          break;
case 'o':printf("vowel o");
         break;
case 'u':printf("vowel u");
         break;
 default :printf("consonant");
          break;
  }
  }
