

#include<stdio.h>
int main()

{

    int j,i;
    int A[3][4], B[3][4];


    //Scanning A Matrix is here,
    printf("Enter elements for a matrix : \n");
    for(i=0; i<3; i++)
    {


        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    //Printing A Matrix is here,
    printf("A = ");
    for(i=0; i<3; i++)
    {

          printf("\t");
        for(j=0; j<4; j++)
        {

            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


       //Scanning B Matrix is here,
    printf("\n \nEnter elements for B matrix : \n");
    for(i=0; i<3; i++)
    {


        for(j=0; j<4; j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }

    //Printing B Matrix is here,
    printf("B = ");
    for(i=0; i<3; i++)
    {

          printf("\t");
        for(j=0; j<4; j++)
        {

            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


}
