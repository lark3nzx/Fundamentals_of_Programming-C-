//รับค่าตัวอักษรลง array มี0เป็นตัว break แล้วเรียก print
#include<stdlib.h>
#include<stdio.h>
void main()
{ int i;
  char c[20],temp;
  printf("what's your name\n");
for (i=0; i< 20;i++)
{
  scanf("%c",&temp);
  if (temp=='0')break;
  else c[i]=temp;
}
printf("hello ");
for (i = 0; i < 20 ; i++)
{
  if(c[i]=='0')break;
  if (c[i]!=NULL)printf("%c",c[i]);
  if (c[i]==NULL)break;
}
}
