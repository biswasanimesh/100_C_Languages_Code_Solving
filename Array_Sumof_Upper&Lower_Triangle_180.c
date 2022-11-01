
#include<stdio.h>
int main()

{
    int A[3][3],i,j,lowersum=0,uppersum=0;

    //getting the elements for the here Matrix are,

    printf("\nEnter the element for the matrix are : \n");

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            printf("A[%d] [%d] = ",i,j);
            scanf("%d", &A[i][j]);
        }
    }

    //Here printing the matrix are
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            printf("  %d",A[i][j]);
        }
        printf("\n");
    }


    //sum of dupper and lower triangle  elements is here


    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {

            if(i<j)
            {
                uppersum = uppersum + A[i][j];

            }
            if(i>j)
            {
                lowersum = lowersum + A[i][j];

            }
        }
    }
    printf("Sum of upper triangle elements is here = %d\n",uppersum);

    printf("Sum of lower triangle elements is here = %d\n",lowersum);



}
