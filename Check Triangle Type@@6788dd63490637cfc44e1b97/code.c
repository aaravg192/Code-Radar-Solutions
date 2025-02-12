#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c && b==c){
        printf("Equilateral");
    }
    else if((a==b && a!=c) || (a==c && b!=c) || (b==c && b!=a)){
        printf("Isosceles");
    }
    else if(a!=b && a!=c && c!=b){
        printf("Scalene");
}
}