#include <stdio.h>

int main()
{
    int i,j,rows,aster,spaces;
    scanf("%d",&rows);
    aster=1;
    spaces=rows-1;
    for(i=1;i<rows*2;i++)
  {
    for(j=1;j<=spaces;j++)
      {printf(" ");}
    for(j=1;j<aster*2;j++)
    {printf("*");}
    printf("\n");
    ((i<rows)?(spaces--,aster++):(spaces++,aster--));
  }
return 0;
}
