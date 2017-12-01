#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
  int price[10],quantity[10],amount[10],i;
for(i=0;i<10;i++)
{
  scanf("%d %d",&price[i],&quantity[i]);
  amount[i] = price[i]*quantity[i];
}
  for(i=0;i<10;i++)
{
  printf("Price: %d\tQuantity: %d\tAmount: %d\n",abs(price[i]),abs(quantity[i]),abs(amount[i]));
}

}
