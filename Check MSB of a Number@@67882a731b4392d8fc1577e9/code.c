#include <stdio.h>

int main() {
    int num;
    
    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    // Mask for MSB (0x80000000)
    if (num & 0x80000000)
        printf("The MSB of %d is 1.\n", num);
    else
        printf("The MSB of %d is 0.\n", num);
    
    return 0;
}
