
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
void secs(int a, int b,int c,int *d);
int main()
{
int *x,totSec=0,HRS,MINS,SECS;
x=&HRS;
printf("HRS: ");
scanf("%d",x);
x=&MINS;
printf("\nMINS: ");
scanf("%d",x);
x=&SECS;
printf("\nSECS: ");
scanf("%d",x);
printf("\n%dhrs %dmins %dsecs\n",HRS,MINS,SECS);
secs(HRS,MINS,SECS,&totSec);
printf("total seconds: %ds\n",totSec);
return 0;
}
void secs(int a, int b,int c,int *d)
{
*d=((a)*pow(60,2))+((b)*60)+(c);
}
