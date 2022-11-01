


#include<stdio.h>

//global structure
struct person
{

    int age;
    float salary;
};


int main()

{
    struct person person[4];
    int i;


    for(i=0; i< 4; i++)
    {
        printf("Enter Information For Person  %d\n", i+1);
        printf("Enter Age :  " );
        scanf("%d",&person[i].age);
        printf("Enter Salary : " );
        scanf("%f",&person[i].salary);
    }

    for(i=0; i< 4; i++)
    {
        printf("\n\nInformation For Person  %d\n", i+1);
        printf("Age :  %d\n",person[i].age  ) ;

        printf(" Salary : %f\n",person[i].salary )  ;

    }
}



