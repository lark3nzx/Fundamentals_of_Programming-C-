//หาระยะทางระหว่างจุดสองจุดโดยใช้ function //มี sqrt pow
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int a,b,c,d;
float e;
float distance(int a,int b,int c,int d)
{e=sqrt(pow(c-a,2)+pow(d-b,2));
return e;
}
int main()
{printf("X1: ");
scanf("%d",&a);
printf("\nY1: ");
scanf("%d",&b);
printf("\nYour first point is (X1,Y1)=(%d,%d)",a,b);
printf("\nX2: ");
scanf("%d",&c);
printf("\nY2: ");
scanf("%d",&d);
printf("Your second point is (X2,Y2)=(%d,%d)",c,d);
distance(a,b,c,d);
printf("\nThe distance between the points is: %f",e);

}
