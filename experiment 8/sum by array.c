#include<stdio.h>
int main()
{
    int a[100],i,sum=0,n;

    printf("How many numbers?");
    scanf("%d",&n);
    printf("Enter the numbers:");

    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }
    printf("the sum is:%d",sum);
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }


}
