#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   float a=0,b=0,result=0;
    printf("Enter a real number...\n");
    scanf("%f%f",&a,&b);
    result = pow(a,b);
    printf("%f to the power of %f = %f\n",a,b,result);
    return 0;
}
