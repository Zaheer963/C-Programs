#include <stdio.h>
int main()
{
   int n;
    printf("enter the number ");
    scanf("%d",&n);
    int factorial=1;
    if(n<0){
        printf("enter only positive no.");
    }else{
        for(int i=1;i<=n;i++){
        factorial=factorial*i;
        }
    printf("the factorial of %d is %d",n,factorial);
    return 0;
    }
}