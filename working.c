#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
printf("Enter a string");
scanf("%s",&str);
switch(str)
{
case "monday":printf("Working day");
               return TRUE;
               break;
case "tuesday":printf("Working day");
                  return TRUE;
              break;
case "wednesday":printf("Working day");
                  return TRUE;
                 break;
case "thursday":printf("Working day");
                return TRUE;
                break;
case "friday":printf("Working day");
                 return TRUE;
               break;
case "saturday":printf("working day");
                return TRUE;
                break;
case "sunday":printf("Holiday!!!");
                 return FALSE;
               break;
default :printf("Enter only days name");
}
return 0;
}
