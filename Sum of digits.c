#include <stdio.h>
int main()
{
    int a,n;
    int s=0;
    printf("enter the number:");
    scanf("%d",&n);
    a=n;
    do{
        int r=n%10;
        s=s+r;
        n=n/10;
    }while(n!=0);
    printf("sum of the digits in %d is %d",a,s);
}