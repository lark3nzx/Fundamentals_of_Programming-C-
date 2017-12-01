#include <stdio.h>

int main() {
    int A,B,C;
    printf("Input Three numbers: ");
    scanf("%d %d %d",&A,&B,&C);
    switch (A<B){
        case 1:
            switch(A<C){
                case 1: printf("%d",A); break;
                case 0: printf("%d",C); break;
            }
            break;
        case 0:
            switch(B<C){
                case 1: printf("%d",B); break;
                case 0: printf("%d",C); break;
            }
            break;
}}
