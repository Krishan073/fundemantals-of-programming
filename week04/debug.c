#include<stdio.h>

int main(){

    int x = 5;
    if (x = 0){              /* Bug 1 -> fix {}*/
        printf("Zero\n");
    }else{
        printf("Non-zero\n");
        }

    switch (x) {
    case 5:
        printf("Five\n");
        break;
    case 6:                  /* Bug 2: what happens here?-> fix break */
        printf("Six\n");
        break;
    }
    return 0;
}