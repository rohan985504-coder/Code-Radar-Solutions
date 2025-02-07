#include <stdio.h>

int main() {
    int c,s;
    scanf("%d",&c, &s);
    if((c>s)&&(s<c)){
        printf("Loss");
    }
    else{
    printf("Profit");
    }

    return 0;
}