#include<stdio.h>
main()
{
int n,sum=0;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter %d integers:",n);
int a[n],i,j;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The sum of the numbers are:\n");
for(i=0;i<n;i++)
{
sum=sum+a[i];
printf("+%d",a[i]);
}
printf("=%d",sum);
}
