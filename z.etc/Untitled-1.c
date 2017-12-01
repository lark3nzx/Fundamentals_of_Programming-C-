#include<stdio.h>
int main()
{
    int a;
    char b;
    printf("orange juice 20 baht\n");
    printf("grape juice 21 baht\n");
    printf("coconut juice 22 baht\n");
    printf("iced tea 18 baht\n");
    printf("type of drink\n");
    scanf("%c",&b);

    if(b == 'o')
    {
        printf("orange juice 20 baht\n");
        scanf("%d",&a);
        if(a>=20)
        {
            printf("here is your orange juice\n");
            printf("your change is %d baht\n", a-20);
        }
        else if(a<20)
        {
            printf("not enough money\n");
        }
    }
    if(b == 'g')
    {
        printf("grape juice 21 baht\n");
        scanf("%d",&a);
        if(a>=21)
        {
            printf("here is your grape juice\n");
            printf("your change is %d baht\n", a-21);
        }
        else if(a<21)
        {
            printf("not enough money\n");
        }
    }
    if(b == 'c')
    {
        printf("coconut juice 22 baht\n");
        scanf("%d",&a);
        if(a>=22)
        {
            printf("here is your coconut juice\n");
            printf("your change is %d baht\n", a-22);
        }
        else if(a<22)
        {
            printf("not enough money\n");
        }
    }
    if(b == 'i')
    {
        printf("iced tea 18 baht\n");
        scanf("%d",&a);
        if(a>=18)
        {
            printf("here is your iced tea\n");
            printf("your change is %d baht\n", a-18);
        }
        else if(a<18)
        {
            printf("not enough money\n");
        }
    }
    return 0;
}