# include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int c=1;c>=i-1;c++){
            printf(" ");
        }
        for(int b=1;b<=i*2;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
} 