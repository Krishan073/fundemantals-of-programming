#include <stdio.h>
int main() {
    
    int a= 20;
    int b= 15;
    int c= 10;

    //Arithmetic Operator

    printf("Addition of a & b: %d\n" ,a+b);
    printf("Subtraction of a & b: %d\n" ,a-b);
    printf("Multiplication of a & b: %d\n" ,a*b);
    printf("Division of a & b: %d\n" ,a/b);
    printf("Remainder of a & b: %d\n" ,a%b);

    //Relational operator

    printf("a==b : %d\n", a==b);
    printf("a!=b : %d\n", a!=b);
    printf("a>b : %d\n", a>b);
    printf("a<b : %d\n", a<b);
    printf("a>=b : %d\n", a>=b);
    printf("a<=b : %d\n", a<=b);

    //Logical operator

    printf("a&&b : %d\n", a&&b);
    printf("a||b : %d\n", a||b);
    printf("!b : %d\n", !b);
    printf("!c : %d\n",!c);

    //Bitwise operator
    printf("a&b: %d\n", a&b);
    printf("a|b: %d\n", a|b);
    printf("a^b: %d\n", a^b);
    printf("-c: %d\n", -c);
    printf("a<<b: %d\n", a<<b);
    printf("a>>b: %d\n", a>>b);


    return 0;
    
}



