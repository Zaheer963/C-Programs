#include <stdio.h>
void main()
{
    int n;
    int digits=0;
    printf("enter the number:");
    scanf("%d",&n);
    int digit=n;
    while(n!=0){
        n=n/10;
        digits++;
    }
    printf("the number of digits :%d",digits);
}