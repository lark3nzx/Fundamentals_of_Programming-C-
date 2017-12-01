//print หลาย data type โดยใช้ function
#include<stdlib.h>
#include<stdio.h>
int x;
float y;
double z;
void check()
{
  printf("Enter an integer: ");
  scanf("%d",&x);

  printf("Enter a floating point number: ");
  scanf("%f",&y);

  printf("Enter a double precision number: ");
  scanf("%lf",&z);
}

int main()
{ check();
  printf("\nThe integer is: %d\n",x);
  printf("The floating point number is: %f\n",y);
  printf("The double precision number is: %lf\n",z);

}
