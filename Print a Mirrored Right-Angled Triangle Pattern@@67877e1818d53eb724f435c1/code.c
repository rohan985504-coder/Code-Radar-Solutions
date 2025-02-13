# include <stdio.h>
int main(){
    int a,b,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        for(b=1;b<=a;b++){
          if(i==1 || i==n || b==1 || b==n){
            printf("*");
        }
           else{
            printf(" ");
        } 
    } 
        printf("\n");
    }
    return 0;
}