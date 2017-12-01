#include <stdio.h>
#define Q 5
int main()
{int i,j,k;
    printf("Enter number\n");
while(scanf("%d",&k)!=EOF)
{
        printf("%d______",k);
    for (i=1;i<=k;i++)
    {
            printf("* ");
    }
}
return 0;
}
