#include<stdio.h>
int main(){
    int a,b,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(b=1;b<=i;b++){
          for(b=1;b<=a-1;b++){
          printf(" ");
    } 
         printf("*");   
        }
        printf("\n");
    }
    return 0;
}