#include <stdio.h>
int main() {
    float a,b;
    char ch;
    scanf("%f %f",&a,&b);
    scanf("%c",&ch);
    switch(ch) {
        case("+"):
            float add=a+b;
            printf("%.2f",add);
            break;
        case("-"):
            float sub=a-b;
            printf("%.2f",sub)
            break;
        case("*"):
            float mul=a*b;
            printf("%.2f",mul);
            break;
        case("/"):
            float div=a/b;
            printf("%.2f",div);
            break;
        }
    }