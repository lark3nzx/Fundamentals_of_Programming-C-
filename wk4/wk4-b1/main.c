#include <stdio.h>
#include <stdlib.h>
void main()
{
    char xenon;
    printf("Please enter a color (R,Y,G)\n");
    xenon=getchar();
    xenon=='R'?printf("stop"):
    xenon=='Y'?printf("slow down!"):
    xenon=='G'?printf("go!"):
    xenon=='r'?printf("stop"):
    xenon=='y'?printf("slow down!"):
    xenon=='g'?printf("go!"):printf("incorrect input!");
    return 0;
}
