#include <stdio.h>

int main() {
    int num, n, bit;
    
    // Input the number
    scanf("%d", &num);
    scanf("%d", &n);
    
    // Validate the bit position
    if (n < 0 || n > 31) {
        printf("Error: Bit position must be between 0 and 31.\n");
        return 1; // Exit with error
    }

    // Extract the nth bit using bitwise shift and AND
    bit = (num >> n) & 1;

    // Print the result
    printf("%d",bit);
    
    return 0;
}
