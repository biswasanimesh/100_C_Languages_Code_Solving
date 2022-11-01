
#include<stdio.h>
int main()

{

    int j,i;
    int A[3][4] = { { 5, 6 , 7 , 8}, {10,11,12,13}, {14,15,16,17} };

    for(i=0;i<3; i++)
    {
        for(j=0; j<4; j++)
        {

            printf("%d ",A[i][j]);
        }
        printf("\n");
    }




}
