#include<stdio.h>
int main()
{
double price[4] = {6.34, 8.92, 65.40, 36.99};
   int code[4] = {1267, 1300, 2401, 4482};
   int loop;
   printf("Part No.\t Price\n");
   for (loop = 0;loop<4;loop++){
       printf("%d\t\t",code[loop]);
       if(price[loop]<10) printf(" ");
       printf("%.2f\n",price[loop]);
     }
   }
