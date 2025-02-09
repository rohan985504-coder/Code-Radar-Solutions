#include <stdio.h>


int main() {
    float a,b,result;
    char ch;
    scanf("%f %f %c",&a, &b, &ch);
    switch(ch) {
        case'+':
            result = a + b;
            printf("%d",result);
            break;
        case'-':
            result = a - b;
            printf("%d",result);
            break;
        case'*':
            result = a * b;
            printf("%d",result);
            break;
        case'/':
            result = a / b;
            printf("%f",result);
            break;            


    }
    return 0;
}