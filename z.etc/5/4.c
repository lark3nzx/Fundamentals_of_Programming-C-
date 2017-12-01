#include <stdio.h>
#define Q 99
int main()
{
  int c,i,x;
  int character[Q];
    printf("Hello,This is a histograms program.\n");
    printf("Enter 5 numbers....\n");

    for(x=0;x<Q;x++)
    character[i]=0;
    while(scanf("%d",&c)!=EOF)
    {character[c]++;
    if(c==EOF)
    break;
    }
      for(x=0;x<Q;x++)
      {
        if(character[x]>0)
        {
        printf("%c |",x);
      for(i=0;i<character[x];++i)
      {printf("*\n");}
      }
    }
    return 0;
}
