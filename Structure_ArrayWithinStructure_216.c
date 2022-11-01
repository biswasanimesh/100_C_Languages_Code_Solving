
#include<stdio.h>

//global structure
struct person
{

    char name[50];

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
        printf("Enter Name : " );
        fflush(stdin);
        gets(person[i].name);
        printf("Enter Age :  " );
        scanf("%d",&person[i].age);
        printf("Enter Salary : " );
        scanf("%f",&person[i].salary);
    }

    for(i=0; i< 4; i++)
    {
        printf("\n\nInformation For Person  %d\n", i+1);
        printf("Name:  %s",person[i].name);
        printf("Age :  %d\n",person[i].age  ) ;

        printf(" Salary : %f\n",person[i].salary )  ;

    }
}




