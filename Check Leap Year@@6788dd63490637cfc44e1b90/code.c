#include <stdio.h>
int main() {
    int a,b;
    scanf("%d",&a);
    if(a%4==0 || a%100!=0 && a%400==0) {
        printf("Leap Year");        
    }
    else{
        printf("Not a leap Year");
    }
}