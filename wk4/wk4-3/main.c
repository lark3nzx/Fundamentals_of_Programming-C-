#include <stdio.h>
#include <stdlib.h>
int main()
{
double number;
 CODE:printf("Enter a number:");
 scanf("%lf",&number);
 if(number < 0.0)
    {
 printf("number is negative\n\n");
 goto CODE;
    }
else
    {
 printf("number is positive");
 return 0;
    }
}

