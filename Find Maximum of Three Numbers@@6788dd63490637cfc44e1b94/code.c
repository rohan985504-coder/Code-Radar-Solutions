#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if(a>b&c){
    printf("%d",a);
    }
     break;
    else if(b>a&c){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }
    return 0;
}