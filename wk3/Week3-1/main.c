#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   char x[15];
    float a, ans1, ans2;
    printf("Enter a unit\n");
    scanf("%s",&x);
    printf("Enter a value\n");
    scanf("%f",&a);
    if ((x == 'mi')||(x == 'miles')||(x == 'mile'))
       {
        ans1=a*(5.0/8.0);
        printf("\nThe answer is %f km",ans1);
        }
    else if ((x == 'km')||(x == 'kilometer')||(x == 'kilometers'))
        {
        ans2=a*(8.0/5.0);
        printf("\nThe answer is %f miles",ans2);
        }
    else
        {
        printf("Non-valid values");
        }
    return 0;
}
