#include<stdio.h>
main()
{
int a=0,b=1,n,i,f=0;
printf("Enter the last number:");
scanf("%d",&n);
printf("Fibonacci Series:%d %d ",a,b);
for(i=0;i<=n;i++)
{
f=a+b;
printf("%d ",f);
a=b;
b=f;
}
}
