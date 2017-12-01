#include <stdio.h>
//1.Input X and Y
//2.Loop of X(Players)
//3.Inside Loop of x, there is Loop of Y(games)
//5.Inside Loop of y,input scores and calculate the avg sc.
int main()
{
int x,y,i,j,score;
float sum;
scanf("%d",&x);
scanf("%d",&y);
for(i=0;i<x;i++)
{   sum=0;
    printf("Player %d\n",x);
      for(j=0;j<y;j++)
  {

          printf("Enter score %d:",j);
          scanf("%d",&score);
          sum+=score;

  }
  sum=sum/y;
  printf("AVG SCORE:%f\n",sum);
}
}
