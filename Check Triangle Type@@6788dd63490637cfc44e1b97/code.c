#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d\t%d\t%d",&a,&b,&c);
    if((a==b)&&(b==c)&&(a==c)){
        printf("Equilateral");
    }
    else if((a==b)||(a==c)||(b==c)){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }

    return 0;
}