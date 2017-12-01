//§”π«≥«‘π“∑’®“° HRS MINS SECS ∑’Ë inputª°µ‘
#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int secs(int a, int b,int c);
int main()
{
int *x,totSec,HRS,MINS,SECS;
x=&HRS;
printf("HRS: ");
scanf_s("%d",x);
x=&MINS;
printf("\nMINS: ");
scanf_s("%d",x);
x=&SECS;
printf("\nSECS: ");
scanf_s("%d",x);
printf("\n%dhrs %dmins %dsecs\n",HRS,MINS,SECS);
totSec=secs(HRS,MINS,SECS);
printf("total seconds: %ds\n",totSec);
return 0;
}
int secs(int a, int b,int c)
{
return ((a)*pow(60,2))+((b)*60)+(c);
}
