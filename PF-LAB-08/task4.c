#include <stdio.h>

int main()
{
    int a[3][3], transpose[3][3], cofactor[3][3], adjoint[3][3];
    int i,j;
    float inverse[3][3];
    int det;

    printf("Enter elements of 3x3 matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nMatrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("\nTranspose:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }

    det = a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])
        - a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])
        + a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    printf("\nDeterminant = %d\n",det);

    cofactor[0][0] = (a[1][1]*a[2][2]-a[1][2]*a[2][1]);
    cofactor[0][1] = -(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
    cofactor[0][2] = (a[1][0]*a[2][1]-a[1][1]*a[2][0]);

    cofactor[1][0] = -(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
    cofactor[1][1] = (a[0][0]*a[2][2]-a[0][2]*a[2][0]);
    cofactor[1][2] = -(a[0][0]*a[2][1]-a[0][1]*a[2][0]);

    cofactor[2][0] = (a[0][1]*a[1][2]-a[0][2]*a[1][1]);
    cofactor[2][1] = -(a[0][0]*a[1][2]-a[0][2]*a[1][0]);
    cofactor[2][2] = (a[0][0]*a[1][1]-a[0][1]*a[1][0]);

    printf("\nCofactor Matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",cofactor[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            adjoint[i][j] = cofactor[j][i];
        }
    }

    printf("\nAdjoint Matrix:\n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",adjoint[i][j]);
        }
        printf("\n");
    }

    if(det != 0)
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                inverse[i][j] = adjoint[i][j] / (float)det;
            }
        }

        printf("\nInverse Matrix:\n");

        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%.2f ",inverse[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nInverse does not exist (Determinant = 0)\n");
    }

    return 0;
}