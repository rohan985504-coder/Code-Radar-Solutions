#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int m,n;
    scanf("%d","%d",&m, &n);
    if(m||n>0){
        printf("True");
    }
    else{
        printf("False");
    }
     
    return 0;
}