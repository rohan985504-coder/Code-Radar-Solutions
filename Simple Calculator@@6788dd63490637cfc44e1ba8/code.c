#include <stdio.h>


int main() {
    float a,b,result;
    char ch;
    scanf("%f %f %c",&a, &b, &ch);
    switch(ch) {
        case'+':
            result = a + b;
            printf("%.f",result);
            break;
        case'-':
            result = a - b;
            printf("%.f",result);
            break;
        case'*':
            result = a * b;
            printf("%.f",result);
            break;
        case'/':
            result = a / b;
            (b==0)?printf("error"):printf("%.f",result);
            break;            
        default:
        printf("error");

    }
    return 0;
}