#include<stdio.h>
int main( )
{
float a, b, c, d;
float ratio;
printf("Enter four integer values\n");
scanf("%d%d%d%d",&a,&b,&c,&d);
if (c-d != 0){
ratio = (a+b)/(c-d);
printf("Ratio = %f\n", ratio);
}
return 0;
}