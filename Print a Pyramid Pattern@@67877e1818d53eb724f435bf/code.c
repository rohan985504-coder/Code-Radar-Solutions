# include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        // for(c=1;c<=2;c++){
        //     printf(" ");
        // }
        for(int b=1;b<=i;b++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} 