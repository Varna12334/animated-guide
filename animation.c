#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "animation.h"

void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void slowPrint(char *text) {
    for(int i = 0; text[i] != '\0'; i++) {
        printf("%c", text[i]);
        fflush(stdout);
        usleep(50000);
    }
}

void welcomeAnimation() {
    clearScreen();
    slowPrint("Welcome to C Programming Animated Guide!\n");
    slowPrint("Loading");
    for(int i = 0; i < 5; i++) {
        printf(".");
        fflush(stdout);
        sleep(1);
    }
    printf("\n");
}

void variablesGuide() {
    clearScreen();
    slowPrint("=== VARIABLES IN C ===\n");
    slowPrint("Variables are used to store data.\n");
    slowPrint("Example:\n");
    slowPrint("int a = 10;\n");
    slowPrint("float b = 2.5;\n");
    slowPrint("Press Enter to go back...");
    getchar(); getchar();
}

void loopsGuide() {
    clearScreen();
    slowPrint("=== LOOPS IN C ===\n");
    slowPrint("Loops repeat a block of code.\n");
    slowPrint("Example:\n");
    slowPrint("for(int i=0;i<5;i++) printf(\"%d\", i);\n");
    slowPrint("Press Enter to go back...");
    getchar(); getchar();
}

void functionsGuide() {
    clearScreen();
    slowPrint("=== FUNCTIONS IN C ===\n");
    slowPrint("Functions divide program into parts.\n");
    slowPrint("Example:\n");
    slowPrint("void hello() { printf(\"Hi\"); }\n");
    slowPrint("Press Enter to go back...");
    getchar(); getchar();
}
