#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if((1<<31)&a){
        printf("Set");
    }
    else{
    printf("Not Set");
    }
    return 0;
}