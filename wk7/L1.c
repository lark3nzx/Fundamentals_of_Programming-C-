#include<stdio.h>
int main()
{
int A[10]={89,75,82,93,78,95,81,88,77,82};
double B[100]={6.29,6.95,8.25,8.35,8.40,8.42};
char C[15]={'f','j','m','q','t','w','z'};
int distance[]={},i;
int miles[4]={1,3,5,7},speed[4]={2,4,6,8};
for (i=0;i<10;i++)
{
printf("Grades:%d ",A[i]);
}
for (i=0;i<6;i++)
{
printf("%lf\n",B[i]);
}
for (i=0;i<7;i++)
{
  printf("%c\n",C[i]);
}
for (i=0;i<4;i++)
{
distance[i] = miles[i]*speed[i];
printf("%d\n",distance[i]);
}
return 0;
}
