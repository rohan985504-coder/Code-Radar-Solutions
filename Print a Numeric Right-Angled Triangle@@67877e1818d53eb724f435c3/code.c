# include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int c=1;c<=a-i;c++){
            printf(" ");
        }
        for(int b=1;b<=i;b++)
        {
            printf("1 ");
        }
        printf("\n");
    }
    return 0;
} 