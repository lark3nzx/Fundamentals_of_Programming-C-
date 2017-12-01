#include<stdio.h>
int main()
{
    int a,b,c;
    int sum;
    char grade;
    scanf("%d %d %d", &a,&b,&c);
    if(a>30||b>35||c>35)
    {
        printf("score is invalid");
    }
    else
    {
        sum=a+b+c;
        if(sum>=90)
            {grade = 'A';}
        else if(sum>=80)
            {grade = 'B';}
        else if(sum>=70)
            {grade = 'C';}
        else if(sum>=60)
            {grade = 'D';}
        else
            {grade = 'F';}
        printf("grade is %c", grade);
    }
return 0;
}
