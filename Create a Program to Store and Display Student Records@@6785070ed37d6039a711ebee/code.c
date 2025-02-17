# include <stdio.h>
int main() {
    int a,rno;
    float marks;
    char name[100];
    scanf("%d\n",&a);
    for(int temp=a;temp!=0;temp--){
        scanf("%d ",&rno);
        scanf("%s ",name);
        scanf("%f ",&marks);
    }
    for(int temp1=a;temp1!=0;temp1--){
        printf("Roll Number: %d, ",rno);
        printf("Name: %s, ",name);
        printf("Marks: %.2f\n",marks);        
    }
    return 0;
}