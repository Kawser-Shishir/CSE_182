#include<stdio.h>
main()
{
int n,i,first,last;
printf("Enter the number:");
scanf("%d",&n);
last=n%10;
while(n>=10)
{
n=n/10;
i++;
}
first=n;
printf("First digit= %d , last digit=%d",first,last);
}
