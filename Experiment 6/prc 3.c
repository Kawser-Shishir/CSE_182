#include<stdio.h>
main()
{
int n,x=0,y=0;
printf("Enter the size of array:");
scanf("%d",&n);
printf("Enter %d integers:",n);
int a[n],i,j;
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if( a[i] % 2 ==0)
{
x++;
}
if( a[i] % 2 != 0)
{
y++;
}
}
printf("There are %d even numbers.\n",x);
printf("There are %d odd numbers.",y);
}
