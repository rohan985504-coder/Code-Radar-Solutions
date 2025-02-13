# include <stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int b=1;b<=a;b++)
        {
            if(i==1 || i==n || b==1 || b==n){
            printf(" *");
            }
        }else{
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}