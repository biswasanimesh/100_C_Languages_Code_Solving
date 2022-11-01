#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter N= ");
    scanf("%d",&n);

    for(row=1; row<=n;row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        //printing number here are showing
        for(col=1; col<=row;col++)
        {
            printf("#");
        }
        printf("\n");
    }



}
