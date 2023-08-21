#include<stdio.h>
main()
{
int a,n,i=1;
printf("Enter the number:");
scanf("%d",&n);
printf("The factors of %d are=",n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
printf("%d, ",i);
}
}
}
