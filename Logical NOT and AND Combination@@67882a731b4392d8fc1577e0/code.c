#include <stdio.h>

int main() {
    int a,b;
    scanf("%d\t%d",&a,&b);
    if(!(a<=0 && b<=0))
    printf("False");
    else
    printf("True");
    return 0;
}