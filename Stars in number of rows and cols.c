#include <stdio.h>
int main()
{
    int rows;
    int cols;
    printf("enter the rows=");
    scanf("%d",&rows);
    printf("enter the cols=");
    scanf("%d",&cols);
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=cols;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}