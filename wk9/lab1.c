//เขียน2DARRAY ด้วย srand(time(null)) แล้ว print
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define row 3
#define column 4
int main()
{
srand(time(0));
int A[3][4],i,j,k;
  for (i = 0; i < row; i++)
  {

    for (j = 0; j < column; j++)
    {
        A[i][j]=rand()%13; //ใส่mod เพื่อให้ค่าน้อยลง
        printf("%d ",A[i][j]);
    }
    for (j=0;j < column; j++)
    {
      printf("\n");
    }
  }

}
