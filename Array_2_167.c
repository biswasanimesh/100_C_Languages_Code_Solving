#include<stdio.h>
int main()

{
    int a[100],i,sum=0,n;

    printf("How many Numbers : ");
    scanf("%d",&n);


   for(i=0;i<n;i++)
   {

       scanf("%d",&a[i]);
   }


    for(i=0;i<n;i++)
    {

        sum = sum + a[i];

    }
    printf("The sum is : %d\n",sum);
    printf("the Average is : %.2f\n",(float)sum/n);


}
