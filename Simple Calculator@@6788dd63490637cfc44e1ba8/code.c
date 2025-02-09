#include <stdio.h>


int main() {
    float a,b,result;
    char ch;
    scanf("%d %d %c",&a, &b, &ch);
    switch(ch) {
        case'+':
            result = a + b;
            printf("%f",result);
            break;
        case'-':
            result = a - b;
            printf("%f",result);
            break;
        case'*':
            result = a * b;
            printf("%f",result);
            break;
        case'/':
            result = a / b;
            printf("%f",result);
            break;            


    }
    return 0;
}