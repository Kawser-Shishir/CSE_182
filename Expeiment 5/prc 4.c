#include<stdio.h>
main()
{
int a,i,x=0;
printf("Enter the number:");
scanf("%d",&a);
for(i=1;i<=a;i++)
{
if(a%i==0)
{
x++;
}
}
if(x==2)
{
printf("It is a prime number");
}
else
{
printf("It is not a prime number.");
}
x=0;
}
