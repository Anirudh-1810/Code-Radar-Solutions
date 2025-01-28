#include <stdio.h>

int main() {
    int a,b;
    scanf("%d\t%d",&a,&b);
    printf("%u", b>>a);
    return 0;
}