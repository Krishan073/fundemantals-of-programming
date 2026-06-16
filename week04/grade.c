#include<stdio.h>
int main() {

    char name[30];
    int mark; 

    printf("Enter Name: ");
    scanf("%s", &name);

    printf("Enter the Mark(0-75): ");
    scanf("%d", &mark);
    printf(".......................\n");
    printf("Name : %s\n", name);

    if(mark < 0 || mark > 75){
        printf("Invalid Mark\n");

    }else if(mark >= 65){
        printf("Grade: A\n");
        printf("Execellent\n");

    }else if(mark >= 55){
        printf("Grade: B\n");
        printf("Very Good");

    }else if(mark >= 35){
        printf("Grade: s\n");
        printf("Pass");
    
    }
    else { 
        printf("Grade: F\n");
        printf("Fail");
    }
    return 0;

}