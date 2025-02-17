#include <stdio.h>

int main() {
    int num;
    
    // Input the number
    scanf("%d", &num);
    
    // Mask for MSB (0x80000000)
    if (num & 0x80000000)
        printf("Set");
    else
        printf("Not Set");
    
    return 0;
}
