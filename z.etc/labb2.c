#include<stdio.h>
#include<stdlib.h>
int num[5];
void sort(int num[],int n);
int main()
{
  int i,n=5;

  for(i=0;i<n;i++)
  {
    scanf("%d",&num[i]);
  }
  sort(num,n);
  for(i=0;i<5;i++)
  printf("%d ",num[i]);
}
void sort(int arr[],int n)
{
  int i,j,temp;
for(i=0;i<(n-1);i++)
  {
    for(j=0;j<(n-i-1);j++)
    {
      if (arr[j] > arr[j+1])
      {temp = arr[j];
        arr[j]= arr[j+1];
        arr[j+1] = temp;}
    }
  }
}
