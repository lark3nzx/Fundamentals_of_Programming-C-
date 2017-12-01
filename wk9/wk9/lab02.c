#include<stdio.h>

int main()
{
  int n,i,j,ch;
  char A[30][30],input;
printf("inputnum:");
scanf("%d %c",&n,&input);
if((n>2)&&(n<31))
{
  for ( i = 0; i < n; i++)
{
  //หัว+ท้าย
  if (i==0||i==n-1)
  {
    for ( j = 0; j < n; j++)
  {A[i][j]=input;
    printf("%c",A[i][j]);}
}
else {for (ch = 0; ch < n; ch++)
  {
    if (ch==n-i-1)
    {A[i][j]=input;
      printf("%c",A[i][j]);}
    else
    {A[i][j]=' ';
      printf("%c",A[i][j]);}
  }

}

printf("\n");
}



}
else
printf("null");


}
