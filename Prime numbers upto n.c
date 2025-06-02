#include<stdio.h>
int main()
{
    int i,j,n;
    printf("enter the number till which you need prime numbers = ");
    scanf("%d",&n);
    printf("the prime numbers are = ");
    for(i=2;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
