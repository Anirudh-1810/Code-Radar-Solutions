#include <stdio.h>

int main() {
    int a,b;
    scanf("%d\t%d",&a,&b);
    if(b*b==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}