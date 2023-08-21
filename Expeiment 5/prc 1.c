#include<stdio.h>
main()
{
int n,a,b,sum=0,rem;
printf("Enter a number:");
scanf("%d",&n);
b=n;
while(n!=0)
{
rem=n%10;
sum=(sum*10)+rem;
n=n/10;
}
a=sum;
if(a==b)
{
printf("It is a palindrome number.");
}
else
{
printf("It is not a palindrome number.");
}
}
