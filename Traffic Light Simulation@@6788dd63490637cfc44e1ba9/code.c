#include <stdio.h>

int main() {
    int a;
    scanf("%c",&a);
    switch(a){
        case'R':
        printf("Stop");
        break;
        case'G':
        printf("GO");
        break;
        case'Y':
        printf("Slow Down");
        break;
        default:
        printf("Invalid input");
    }
    return 0;
}