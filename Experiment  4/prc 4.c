#include<stdio.h>
main()
{
int sum=0,i,n;
printf("Enter the last number:");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("The sum of first %d natural number =%d",n,sum);
}
