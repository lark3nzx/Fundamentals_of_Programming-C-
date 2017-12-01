#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   float a=0,result=0;
    printf("Enter a real number...\n");
    scanf("%f",&a);
    result = sqrt(sqrt(a));
    printf("Fourth root of %f is =%f\n",a,result);
    return 0;
}
