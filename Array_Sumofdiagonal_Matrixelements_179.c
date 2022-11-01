
#include<stdio.h>
int main()

{
    int A[3][3] ,i,j,sum=0;

    //getting the elements for the here Matrix are,

    printf("\nEnter the element for the matrix are : \n");

    for(i=0; i<3; i++)
    {
        for(j=0;j<3;j++)
        {

            printf("A[%d] [%d] = ",i,j);
            scanf("%d", &A[i][j]);
        }
    }

    //Here printing the matrix are
    for(i=0; i<3; i++)
    {
      for(j=0;j<3;j++)
      {

          printf("  %d",A[i][j]);
      }
      printf("\n");
    }


    //sum of diagonal elements is here

    printf("Diagonal Elements : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {

            if(i==j)
            {
             printf("%d  ",A[i][j]);
                sum = sum + A[i][j];

        }
        }
    }
    printf("Sum of diagonal elements is here = %d\n",sum);



}
