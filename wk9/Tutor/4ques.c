//เขียนดาว ตามrows และ column ที่ระบุ
#include<stdio.h>
void main(/* arguments */)
{
  int i,j,a,b;

  printf("Enter rows: ");
  scanf("%d",&i);
  printf("rows: %d\n",i);
  printf("Enter columns: ");
  scanf("%d",&j);
  printf("rows: %d | column: %d\n",i,j);
  for (a = 0; a < i; a++)
  {
    for (b = 0; b < j; b++)
    {
    printf("* ");

    }
    printf("\n");
  }
}
