#include <stdio.h>
int main()
    {
    int i,j;
    unsigned long long fac=1;
    scanf("%d",&j);
    printf("Enter the factorial number :%d\n",j);
  if(j>=0)
  {
    for(i=1;i<=j;i++)
    {
    fac*=i;
    }
    printf("%d!=%llu",j,fac);
    }
  else
  printf("INVALID");
  return 0;
    }
