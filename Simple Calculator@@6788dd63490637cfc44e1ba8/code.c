#include <stdio.h>

int main() {
    int a,b;
    char o;
    scanf("%d\t%d\%c",&a,&b,&o);
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
            printf("%.2f",a/b);
            break;
        default:
            printf("error");
    }

    return 0;
}