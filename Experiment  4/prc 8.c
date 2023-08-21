#include<stdio.h>
main()
{
int n,a,i;
printf("Enter the number:");
scanf("%d",&n);
printf("The reverse of the number: ");
while(n!=0)
{
a=n%10;
n=n/10;
printf("%d",a);
}
}
