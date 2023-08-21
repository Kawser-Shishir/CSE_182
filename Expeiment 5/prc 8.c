#include<stdio.h>
int fact(int r);
main()
{
int n,i,rem,f,sum=0,k ;
printf("Enter the number:");
scanf("%d",&n);
k=n;
while(n!=0)
{
rem=n%10;
n=n/10;
f=fact(rem);
sum=sum+f;
}
if(sum==k)
{
printf("It is strong number.");
}
else
{
printf("It is not a strong number.");
}
}
int fact(int r)
{
int i,mul=1;
for(i=1;i<=r;i++)
{
mul=mul*i;
}
return mul;
}
