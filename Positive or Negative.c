#include <stdio.h>
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    if(n>=0){
        printf("%d is a positive integer",n);
    }else{
        printf("%d is is negative integer",n);
    }
}