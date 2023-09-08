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
printf("The negative elements of the array are:");
for(i=0;i<n;i++)
{
if(a[i]<0)
{
printf("%d ",a[i]);
}
}
}
