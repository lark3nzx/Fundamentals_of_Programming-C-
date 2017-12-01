
#include <stdio.h>
#include <stdlib.h>
void order(int *x,int*y,int *z);
void swap(int *i,int *j);
int main()
{
int nm1,nm2,nm3;

scanf("%d %d %d",&nm1,&nm2,&nm3);
order(&nm1, &nm2, &nm3);
return 0;
}
void order(int *x,int*y,int *z)
{
if(*z<*x){swap(z,x);}
if(*z<*y){swap(z,y);}
if(*x>*y){swap(y,x);}
printf("%d %d %d\n",*x,*y,*z);
}
void swap(int *i,int *j)
{int temp=0;
  temp=*i;
  *i=*j;
  *j=temp;
}
