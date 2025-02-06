#include <stdio.h>

int main() {
    int a,b;
    char o;
    scanf("%d\t%d\t%c",&a,&b,&o);
    switch (o) {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%f",a/b);
            break;
        default:
            printf("error");
    }

    return 0;
}