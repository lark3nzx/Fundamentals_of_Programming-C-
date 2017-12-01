#include<stdio.h>

int main()
{
  int size;
  char data,A[size][data];
  scanf("%d %c",&size,&data);
int i,j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if(i==0||i==size-1||size-(i+1)){A[i][j]=data;printf("%c",A[i][j]);}
else printf(" ");
}
  }
}
