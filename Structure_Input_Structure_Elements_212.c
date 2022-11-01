

#include<stdio.h>

//global structure
struct Person
{

    int age;
    float salary;
};


int main()

{

    struct Person  person1,person2; //Local Variable,

    printf("Ënter Information for person1\n");

    printf("Ënter Age : ");
    scanf("%d",&person1.age);

    printf("Enter Salary : "  );
    scanf("%f",&person1.salary);

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n\n",person1.salary);

    printf("Ënter Information for person2\n");

    printf("Ënter Age : ");
    scanf("%d",&person2.age);

    printf("Enter Salary : "  );
    scanf("%f",&person2.salary);

    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);







    getch();

}
