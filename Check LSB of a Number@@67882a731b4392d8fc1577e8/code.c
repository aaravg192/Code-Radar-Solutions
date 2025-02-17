#include <stdio.h>

int main() {
    int num;
    
    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Check LSB using bitwise AND
    if (num & 1)
        printf("The LSB of %d is 1.\n", num);
    else
        printf("The LSB of %d is 0.\n", num);
    
    return 0;
}
