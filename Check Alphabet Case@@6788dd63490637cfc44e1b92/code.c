#include <stdio.h>

int main() {
    char my;
    scanf("%d",&my);
    if(my>='A' && my<='Z'){
        printf("Uppercase");
    }
    else if(my>='a'&&my<='z'){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}