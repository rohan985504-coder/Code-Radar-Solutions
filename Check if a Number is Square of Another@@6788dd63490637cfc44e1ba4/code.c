#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a, &b);
    int s = b*b;
    if(s==a){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}