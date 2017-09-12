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
               break;
case "tuesday":printf("Working day");
              break;
case "wednesday":printf("Working day");
                 break;
case "thursday":printf("Working day");
                break;
case "friday":printf("Working day");
               break;
case "saturday":printf("working day");
                break;
case "sunday":printf("Holiday!!!");
               break;
default :printf("Enter only days name");
}
return 0;
}
