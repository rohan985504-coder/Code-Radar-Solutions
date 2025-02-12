# include <stdio.h>
int main()
{
    int a,c;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(c=1;c<=a;c++){
            printf(" ");
        }
        for(int b=1;b<=a*2;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
} 