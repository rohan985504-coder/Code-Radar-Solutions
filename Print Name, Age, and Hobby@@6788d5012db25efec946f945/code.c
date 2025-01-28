#include <stdio.h>

int main() {
    char str1[100];
    int i;
    char str2[100];
    scanf("%99s %d %99s", &str1, &i, &str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n",i);
    printf("Hobby: %s\n",str2);
}