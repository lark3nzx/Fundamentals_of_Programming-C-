#include<stdio.h>
int main()
{
int A[500],i,x=0;
float sum=0;
for(i=0;i<500;i++)
{
  scanf("%d",&x);
  if(x>=0)
  {A[i++]=x;
  sum=sum+x;}
  else
  break;
  }
  printf("%f\n",2*(sum/i));
}
