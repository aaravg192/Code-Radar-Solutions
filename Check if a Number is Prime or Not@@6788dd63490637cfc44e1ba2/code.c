#include <stdio.h>
int main() {
    int a,isprime=1;
    scanf("%d",&a);
    for(int temp=2;temp<a;temp++) {
        if(a%temp!=0){
            isprime=1;
       }else if (a%temp==0){
            isprime=0;       
        }
    }
    if (isprime){
        printf("Prime");
    }
    else {
        printf("Not Prime");
    }

}