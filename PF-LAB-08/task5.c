#include <stdio.h>

int main()
{
    int a[5][5], b[5][5];
    int i,j,r,c;
    int zero=1, identity=1, diagonal=1, scalar=1;
    int upper=1, lower=1, symmetric=1, skew=1;
    int equal=1;
    int det;

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    printf("Enter matrix elements:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix:\n");
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    if(r==c)
        printf("Square Matrix\n");
    else
        printf("Rectangular Matrix\n");

    if(r==1)
        printf("Row Matrix\n");

    if(c==1)
        printf("Column Matrix\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
                zero=0;

            if(i!=j && a[i][j]!=0)
                diagonal=0;

            if(i==j && a[i][j]!=a[0][0])
                scalar=0;

            if(i>j && a[i][j]!=0)
                upper=0;

            if(i<j && a[i][j]!=0)
                lower=0;
        }
    }

    if(zero)
    {
        printf("Zero Matrix\n");
        printf("Null Matrix\n");
    }

    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(i==j && a[i][j]!=1)
                    identity=0;

                if(i!=j && a[i][j]!=0)
                    identity=0;
            }
        }

        if(identity)
            printf("Identity Matrix\n");

        if(diagonal)
            printf("Diagonal Matrix\n");

        if(scalar && diagonal)
            printf("Scalar Matrix\n");

        if(upper)
            printf("Upper Triangular Matrix\n");

        if(lower)
            printf("Lower Triangular Matrix\n");

        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                if(a[i][j]!=a[j][i])
                    symmetric=0;

                if(a[i][j]!=-a[j][i])
                    skew=0;
            }
        }

        if(symmetric)
            printf("Symmetric Matrix\n");

        if(skew)
            printf("Skew-Symmetric Matrix\n");

        if(r==2)
        {
            det = a[0][0]*a[1][1] - a[0][1]*a[1][0];

            if(det==0)
                printf("Singular Matrix\n");
            else
                printf("Non-Singular Matrix\n");
        }
    }

    printf("Enter another matrix to compare for equality:\n");

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(a[i][j]!=b[i][j])
                equal=0;
        }
    }

    if(equal)
        printf("Equal Matrix\n");
    else
        printf("Matrices are not equal\n");

    return 0;
}