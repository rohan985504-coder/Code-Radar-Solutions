#include <stdio.h>

int main() {
    char str1[100];
    int i;
    char str2[100];
    scanf("%s%d%s",&str1, &i, &str2);
    printf("Name: %s",str1);
    printf("Age: %d",i);
    printf("Hobby: %s",str2);
}