#include <stdio.h>

int main() {
    int num;
    
    // Input the number
    scanf("%d", &num);
    
    // Check LSB using bitwise AND
    if (num & 1)
        printf("Set");
    else
        printf("Not Set");
    
    return 0;
}
