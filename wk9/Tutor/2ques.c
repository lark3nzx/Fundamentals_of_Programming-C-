#include<stdio.h>
int main()
{
int a=0;
A:printf("%d \n",a);
if(a<10)
{
  a++;
  goto A;

}
}
//use goto as for loop
