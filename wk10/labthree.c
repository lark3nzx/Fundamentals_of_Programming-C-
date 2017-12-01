//ประกาศ 3 array เอา for i=0;i++->> amount[i]=price[i]*quantity[i]
#include<stdlib.h>
#include<stdio.h>
int i;
void extend(double a[],double b[],double c[]);

int main()
{
double price[10]={10.62,14.89,13.21,16.55,18.62,93.47,6.58,18.32,12.15,3.98};
double quantity[10]={1,2,3,4,5,6,7,8,9,10};
double amount[10];
extend(price,quantity,amount);
return 0;
}
void extend(double a[],double b[],double c[])
{
for (i=0;i<10;i++)
{
  c[i]=(a[i]) * (b[i]);
printf("%lf\n",c[i]);
}

}
