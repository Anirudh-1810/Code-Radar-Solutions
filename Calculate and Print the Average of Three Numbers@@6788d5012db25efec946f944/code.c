#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    float avg =(float)((a+b+c)/3.0);
    printf("Average: %.2f", avg);
    return 0;
}