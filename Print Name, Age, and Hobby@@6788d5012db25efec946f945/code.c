#include <stdio.h>

int main() {
    char a[30];
    int b;
    char c[30];
    scanf("%s\t",&a);
    scanf("&d\n",&b);
    scanf("&s",&c);
    printf("Name: %s\nAge: %d\nHobby: %s", a,b,c);
    return 0;
}