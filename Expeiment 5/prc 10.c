#include<stdio.h>
main()
{
int a;
printf("Enter the no. of day in week:");
scanf("%d",&a);
switch(a)
{
case 1:
printf("Sunday");
break;
case 2:
printf("Monday");
break;
case 3:
printf("Tuesday");
break;
case 4:
printf("Wednesday");
break;
case 5:
printf("Thursday");
break;
case 6:
printf("Friday");
break;
case 7:
printf("Sunday");
default:
printf("Enter correct number!!");
}
}
