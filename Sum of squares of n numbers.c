#include <stdio.h>
int main()
{
 int n;
 printf("enter the number:");
 scanf("%d",&n);
 int sum=0;
 for(int i=1;i<=n;i++){
     if(i==n){
         printf("%d^2 (%d)",i,i*i);
     }else{
         printf("%d^2 (%d) + ",i,i*i);
     }
     sum=sum+i*i;
 }
 printf("\nsum is:%d",sum);
    return 0;
}
