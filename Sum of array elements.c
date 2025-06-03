#include <stdio.h>
#include<conio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("enter the size of array=");
    scanf("%d",&n);
    printf("enter the elements in array=");
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        sum+=a[i];
    }
    printf("the sum of the array elements= %d",sum);
    return 0;
}