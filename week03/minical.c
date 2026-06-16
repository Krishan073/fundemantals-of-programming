#include <stdio.h>
int main() {

    int a;
    int b;

    printf("***MINI CALCULATOR***\n");

    printf("Enter First Number : ");
    scanf("%d",&a);

    printf("Enter second Number : ");
    scanf("%d",&b);

    printf("Addition: %d\n" ,a+b);
    printf("Subtraction: %d\n" ,a-b);
    printf("Multiplication: %d\n" ,a*b);
    printf("Division: %d\n" ,a/b);
   

    return 0;

}