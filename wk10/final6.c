//เรียก print string
#include<stdio.h>
#include<stdlib.h>
#define count 100
int main()
{int i,val=0;
char m[7][7]={"Banana","Apple","Orange","Durian","STEVE"};
for (i = 0; i < count; i++)
{
  scanf("%d",&val);
  if (val==-1)break;
  else
  {
    printf("%s\n",m[val-1]
  );
  }
}
return 0;
}
