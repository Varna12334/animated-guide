#include <stdio.h>
#include "animation.h"

int main() {
    int choice;

    welcomeAnimation();

    while(1) {
        printf("\n========== C ANIMATED GUIDE ==========\n");
        printf("1. Learn Variables\n");
        printf("2. Learn Loops\n");
        printf("3. Learn Functions\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: variablesGuide(); break;
            case 2: loopsGuide(); break;
            case 3: functionsGuide(); break;
            case 4: 
                printf("Thanks for using C Animated Guide!\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
