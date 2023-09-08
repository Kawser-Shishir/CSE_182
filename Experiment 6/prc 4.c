#include<stdio.h>
main()
{
int n;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter %d integers:",n);
int a[n],b[n],i,j;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The elements of first array:");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
printf("\n\nThe elements of second array:");
for(i=0;i<n;i++)
{
b[i]=a[i];
printf("%d ",b[i]);
}
}
