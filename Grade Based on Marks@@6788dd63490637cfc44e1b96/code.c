#include <stdio.h>

int main() {
    int mr;
    scanf("%d",&mr);
    if(mr>=90){
        printf("A");
    }
    else if(mr<90&&mr>=80){
        printf("B");
    }
    else if(mr<80&&mr>=70){
        printf("C");
    }
    else if(mr<70&&mr>=60){
        printf("D");
    }
    else{
        printf("F");
    }

    return 0;
}