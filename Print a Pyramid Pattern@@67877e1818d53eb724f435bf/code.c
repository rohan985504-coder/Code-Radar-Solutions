# include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int b=0;b<=i+1;b++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
} 