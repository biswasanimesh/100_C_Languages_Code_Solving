#include<stdio.h>
int main()

{
    int i,n,sum=0;
    printf("Enter n= ");
    scanf("%d",&n);

    for(i=1; i<=n; i=i+3 )
    {

        printf("%d ",i);
        sum = sum + i;

    }

printf("\nsum = %d\n",sum);


    getch();
}
