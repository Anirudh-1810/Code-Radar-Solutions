#include <stdio.h>
#include <ctype.h>

int main() {
    char my;
    scanf("%d",&my);
    if(my>='A'&&my<='Z'){
        printf("Uppercase");
    }
    else if(islower(my)){
        printf("Lowercase");
    }
    else{
        printf("Not an alphabet");
    }
    return 0;
}