#include<stdio.h>
#include<math.h>
int main()
{
    int mat1[3][3],mat2[3][3],mat3[3][3],i,j;
    printf("enter the matrix 1\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    scanf("%d",&mat1[i][j]);
    }
    printf("enter the matrix 2\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    scanf("%d",&mat2[i][j]);
    }
    printf("\nadding two matrices");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    mat3[i][j]=mat1[i][j]+mat2[i][j];
    }
    printf("\nboth the matrix added");
    printf("\nthe new matrix is\n");
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    printf("%d ",mat3[i][j]);
        printf("\n");
    }
    return 0;
}
