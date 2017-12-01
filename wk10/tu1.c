//จับ 2 matrix มาบวกกัน
#include<stdio.h>
int main()
{
int n;
  printf(" n (nxn) = ");
  scanf("%d",&n);
  printf("\n");
int i,j,A[n][n],B[n][n],C[n][n],data1,data2;
printf("Insert Matrix A...\n");
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
    {
      printf("(%d,%d)= ",i+1,j+1);
      data1=A[i][j];
      scanf("%d",&A[i][j]);
      }
    }
printf("Complete !");
printf("Insert Matrix B...\n");
for (i = 0; i < n; i++)
{
  for (j = 0; j < n; j++)
  {
    printf("(%d,%d)= ",i+1,j+1);
    data2=B[i][j];

    scanf("%d",&B[i][j]);
    }
  }
printf("Complete !");
printf("The Result Matrix is...\n");
int datax;
for (i = 0; i < n; i++)
{
  for (j = 0; j < n; j++)
  {
    data1=A[i][j];
    data2=B[i][j];
for (i = 0; i < n; i++)
    {
    for (j = 0; j < n; j++)
      {
      C[i][j]=A[i][j]+B[i][j ];
      printf("\t%d \t",C[i][j]);
        }
printf("\n");
      }
    }
  }
}
