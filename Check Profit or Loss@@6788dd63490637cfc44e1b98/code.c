#include <stdio.h>

int main() {
    int c,s;
    scanf("%d",&c, &s);
    if((c>s)&&(s<c)){
        printf("Profit");
    }
    else{
    printf("Loss");
    }

    return 0;
}