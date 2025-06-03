#include <stdio.h>
int main()
{
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    int n1=0;
    int n2=1;
    printf(" %d %d ",n1,n2);
    for(int i=3;i<=n;i++){
        int sum= n1+n2;
        printf("%d ",sum);
        n1=n2;
        n2=sum;
    }
    return 0;
}