# include <stdio.h>
int main() {
    int a,n;
    scanf("%d",&n);
    for(a=1;a<=10;a++){
        printf("%d x %d = %d\n",n,a,n*a);
    }
}