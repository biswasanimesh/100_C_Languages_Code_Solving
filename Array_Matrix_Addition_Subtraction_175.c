

#include<stdio.h>
int main()

{

    int i,j,numberOfRows,numberOfCols;
    int A[10][10], B[10][10],C[10][10];

    printf("Enter the number of rows and cols : ");
    scanf("%d %d",&numberOfRows,&numberOfCols);


    //Scanning A Matrix is here,
    printf("Enter elements for a matrix : \n");
    for(i=0; i<numberOfRows; i++)
    {


        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Scanning B Matrix is here,
    printf("\n \nEnter elements for B matrix : \n");
    for(i=0; i<numberOfRows; i++)
    {


        for(j=0; j<numberOfCols; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }


    //Printing A Matrix is here,
    printf("A = ");
    for(i=0; i<numberOfRows; i++)
    {

        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {

            printf("%d ",A[i][j]);
        }
        printf("\n");
    }



    //Printing B Matrix is here,
    printf("\nB = ");
    for(i=0; i<numberOfRows; i++)
    {

        printf("\t");
        for(j=0; j<numberOfCols; j++)
        {

            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


    //Adding here Matrix are showing

    for(i=0; i<numberOfRows; i++)
    {


        for(j=0; j<numberOfCols; j++)
        {
            C[i][j] = A[i][j] + B [i] [j];

        }

    }

    //Printing C Matrix is here,
    printf("\nA + B = ");
    for(i=0; i<numberOfRows; i++)
    {

        printf("");
        for(j=0; j<numberOfCols; j++)
        {

            printf("%d ",C[i][j]);
        }
        printf("\n\t");
    }
}

