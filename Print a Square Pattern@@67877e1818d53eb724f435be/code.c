# include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int b=2;b<=i;b++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
} 