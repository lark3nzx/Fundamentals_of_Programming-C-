//string %s นอกเรื่องข้อนี้ %p print pointer (address) การใช้sentinel
#include <stdio.h>
#include <stdlib.h>
#define count 100
void main()
{
int m,d,sentinel_1=0,sentinel_2=0;
char month[12][4]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Oct","Sep","Nov","Dec"};
int day[12]={31,29,31,30,31,30,31,31,30,31,30,31};
do{
    do{if(sentinel_1||sentinel_2){printf("Error\n");}
        printf("Enter a month : ");
    scanf("%d",&m);
    sentinel_1=1;
    sentinel_2=0;}while(m<=0||m>12);

    printf("%s\n",month[m-1]);
    printf("Enter a day: ");
    scanf("%d",&d);
    sentinel_2=1;
    sentinel_1=0;
}while(d<=0||d>day[m-1]);
printf("your date is: %d",d);
if(d==1||d==21||d==31)
{printf("st");}
else if(d==2||d==22||d==32)
{printf("nd");}
else if(d==3||d==23||d==33)
{printf("rd");}
else{printf("th");}
printf("   %s",month[m-1]);
}
