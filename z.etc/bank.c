#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d,e,f;
    int money;

    scanf("%d",&money);
    if(money%100 == 0)

    {
        printf("yes\n");

        d=money/1000;
        money=money%1000;

        e=money/500;
        money=money%500;

        f=money/100;
        money=money%100;

        printf("%d 1000 of banknotes\n",d);
        printf("%d 500 of banknotes\n",e);
        printf("%d 100 of banknotes\n",f);

    }
    else
        printf("no\n");
    return 0;

}
