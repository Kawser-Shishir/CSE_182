#include<stdio.h>
main()
{
int factorial=1,n,i;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
factorial=factorial*i;
}
printf("The factorial of %d =%d",n,factorial);
}
