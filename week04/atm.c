#include <stdio.h>

int main() {

    int num;
    int dep;

    printf("....SESUL ATM....\n");
    printf("Check Balance -> 1\n");
    printf("Deposit -> 2\n");
    printf("Withdraw -> 3\n");
    printf("Exit -> 4\n");
    printf("__Select Number What to do__\n");
    printf(" ");

    printf("Enter a Number (1-4): ");
    scanf("%d", &num);

    switch(num) {
        int a;
        float b;
    
        case 1:
            printf("Your Balance : RS.25000.00\n");
            break;
        
        case 2:
            printf("Your balance:Rs.25000.00 \n");
            printf("Deposit :Rs. ");
            scanf("%d", &a);
            b=25000+a;
            printf("New Balance: Rs. %.2f",b);
            break;

        case 3:
            printf("Your balance:Rs.25000.00\n");
            printf("Withdraw: Rs. ");
            scanf("%d", &a);
            b=25000-a;
            printf("New balance: Rs. %.2f", b);
            break;

        case 4:
            printf("Good Bye\n");
            break;


        default:
            printf("Invalid Option\n");

        }
        return 0;
}


 