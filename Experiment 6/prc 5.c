#include<stdio.h>
main()
{
int n;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter %d integers:",n);
int a[n],i,j;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The elements of the array:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\nThe reverse of the array:");
for(i=(n-1);i>=0;i--)
{
printf("%d ",a[i]);
}
}
