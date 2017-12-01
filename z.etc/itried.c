#include <stdio.h>
#include <stdlib.h>

int main() {

    int num, middle, spaceCount, starCount;
    int i,j,rows,aster,spaces;

    if(num%2==0)
    {
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
    }
        else
        { printf("Enter a num:");
          scanf("%d",&num);
          middle = (num-1)/2;
          starCount=starCount+1;

          for (int i = 0; i < num; i++){


              spaceCount = abs(middle - i);
              starCount = num - 2*abs(middle - i);

              for(int c = 0; c < spaceCount; c++)
                  printf(" ");

              for(int c = 0; c < starCount; c++)
                  printf("*");

              for(int c = 0; c < spaceCount; c++)
                  printf(" ");

              printf("\n");}
  
        }
    }
