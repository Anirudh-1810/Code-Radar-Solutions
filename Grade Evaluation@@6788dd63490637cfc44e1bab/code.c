#include <stdio.h>

int main() {
    char my;
    scanf("%c",&my);
    if(my=='A'){
        printf("Excellent");
    }
    else if(my=='B'){
        printf("Good");
    }
    else if(my=='C'){
        printf("Average");
    }
    else if(my=='D'){
        printf("Below Average");
    }
    else if(my=='F'){
        printf("Fail");
    }
    else{
        printf("Invaild grade");
    }
    return 0;
}