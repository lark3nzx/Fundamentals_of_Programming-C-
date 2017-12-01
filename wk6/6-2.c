#include <stdio.h>
int main()
    {;
    int start=0,stop,increment;
    printf("start:\n");
    scanf("%d",&start);
    printf("stop:\n");
    scanf("%d",&stop);
    printf("increment:\n");
    scanf("%d",&increment);
    do
    {
      printf("%d\n",start);
      start=start+increment;
    }
    while(start<=stop);
  }
