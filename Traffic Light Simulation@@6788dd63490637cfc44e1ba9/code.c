#include <stdio.h>

int main() {
    char my;
    scanf("%c",&my);
    if(my=='R'){
        printf("Stop");
    }
    else if(my=='G'){
        printf("Go");
    }
    else if(my=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}