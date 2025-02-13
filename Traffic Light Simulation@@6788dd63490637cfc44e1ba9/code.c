#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    switch(c) {
        case('R'):
            printf("Stop");
            break;
        case('G'):
            printf("Good");
            break;
        case('Y'):
            printf("");
            break;
        default: printf("Invalid input");break;
        }
    }