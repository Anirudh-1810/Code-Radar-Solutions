#include <stdio.h>

int main() {
    char a[10];
    scanf("%s",&a);
    if(a>=0&&a<=9){
        printf("Digit");
    }
    else{
        printf("Vowel");
    }
    return 0;
}