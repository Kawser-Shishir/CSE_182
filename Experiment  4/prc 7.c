#include<stdio.h>
main()
{
int a,n,sum=0,remainder;
printf("Enter the number:");
scanf("%d",&n);
a=n;
while(a!=0)
{
remainder=a%10;
sum=sum+remainder;
a=a/10;
}
printf("The sum of digits= %d",sum);
}
