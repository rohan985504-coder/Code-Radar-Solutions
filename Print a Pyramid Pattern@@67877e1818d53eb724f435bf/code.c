# include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {
        for(int b=1;b<=i*2;b=2)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
} 