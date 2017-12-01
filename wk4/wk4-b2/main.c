#include <stdio.h>

int main()
    {
    char operator;
    double A,B;
    printf("Select an operator either + or - or * or / \n");
    scanf("%c",&operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&A,&B);
    switch (operator){
        case '+':
            printf("%f %c %f = %f",A,operator,B,A+B);
            break;
        case '-':
            printf("%f %c %f = %f",A,operator,B,A-B);
            break;
        case '*':
            printf("%f %c %f = %f",A,operator,B,A*B);
            break;
        case '/':
            printf("%f %c %f = %f",A,operator,B,A/B);
            break;
        default: printf("Error101");
    }
        return 0;
    }
//If the break statement is ignored,The following case will keep repeating itself.
