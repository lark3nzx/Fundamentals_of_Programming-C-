#include<stdio.h>
//Xdat = Number of data
float divide(float a,float b)
{
  float result;
  result = a/b;
  return result;
}
void main()
{
float a,i,Xdat,func;
float Asum=0;
printf("Please enter #Xdata: ");
scanf("%f",&Xdat);
for (i = 0; i < Xdat; i++)
{
printf("Enter a number : ");
scanf("%f",&a);
Asum=Asum+a;
printf("AccumulatedSum: %-.3f\n\n",Asum);
}
func=divide(Asum,i);
printf("mean:%-.3f", func);
}
