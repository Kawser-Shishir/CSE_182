#include<stdio.h>
main()
{
int n,i=0;
printf("Enter any integer:");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
i++;
}
printf("The number of digits= %d",i);
}
