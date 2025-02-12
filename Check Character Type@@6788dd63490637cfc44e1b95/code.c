#include <stdio.h>

int main() {
    int a;
    scanf("%ch",&a);
    if(a==a || a==e || a==i || a==o || a==u){
    printf("Vowel");
    }
    else if(a==2 || a==3 || a==5 || a==7){
        printf("Prime");
    }
    else if(a%2==0 || a%3==0 || a%5==0 a%7==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }

    return 0;
}