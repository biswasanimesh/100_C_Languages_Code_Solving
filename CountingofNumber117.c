#include<stdio.h>
int main()
{
    int num,count = 0;

    printf("Enter any integer Number : ");
    scanf("%d",&num);

    while(num!=0)
    {
        num = num/10;
        ++count;
    }

    printf("Total Number of digits : %d\n",count);


}
