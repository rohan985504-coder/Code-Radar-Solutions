#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a, &b, &c);
    if(a=b=c){
        printf("Equilateral");
    }
    if(a!=b!=c){
        printf("Scalence");
    }
    else{
        printf("Isosceles");
    }
    
    return 0;
}