#include <stdio.h>
#include <stdlib.h>

int main()
{   int num1=0,num2=0;
    float sum=0,avg=0;
    printf("Enter two number...\n");
    scanf("%d%d",&num1,&num2);
    sum=num1+num2;
    avg=(num1+num2)/2;
    printf("Sum of entered numbers = %f\n",sum);
    printf("\nAverage of %d and %d is = %f",num1,num2,avg);
    return 0;

}
