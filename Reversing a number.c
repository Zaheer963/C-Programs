#include <stdio.h>
int main()
{
    int n,r,q=0,a;
    printf("enter the number:");
    scanf("%d",&n);
    a=n;
    while(n!=0){
        r=n%10;
        q=q*10+r;
        n=n/10;
    }
    printf("the reverse no. of %d is %d",a,q);
    return 0;
}